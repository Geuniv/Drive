# 7장

install.packages("XML")

library(XML)
library(ggplot2)

api <- "http://apis.data.go.kr/B552584/ArpltnStatsSvc/getCtprvnMesureLIst"
api_key <- "NiMC9MGQZ6y5WdBECwJNOyDr3w4XMoRUorMyLufi0z%2FZbFf%2BcV%2FCt4gl8GkEwfzwz1aAuvWOyPAgszEPtZjLcA%3D%3D"

returnType <- "xml"
numOfRows <- 10
pageNo <- 1
itemCode <- "PM10"
dataGubun <- "HOUR"
searchCondition <- "MONTH"
url <- paste(api,
		 "?serviceKey=", api_key,
		 "&returnType=", returnType,
		 "&numOfRows=", numOfRows,
		 "&pageNo=", pageNo,
		 "&itemCode=", itemCode,
		 "&dataGubun=",dataGubun,
		 "&searchCondition=", searchCondition,
		 sep="")
url

xmlFile <- xmlParse(url)
xmlRoot(xmlFile)

df <- xmlToDataFrame(getNodeSet(xmlFile, "//items/item"))
df

ggplot(data=df, aes(x=dataTime, y=seoul)) + 
geom_bar(stat="identity", fill="green")

ggplot(data=df, aes(x=dataTime, y=seoul)) + 
geom_bar(stat="identity", fill="green") +
theme(axis.text.x=element_text(angle=90)) +
labs(title="시간대별 서울지역의 미세먼지 농도 변화", x = "측정일시", y = "농도")

ggplot(data=df, aes(x=dataTime, y=seoul, fill=dataTime)) + 
geom_bar(stat="identity") +
theme(axis.text.x=element_text(angle=90)) +
labs(title="시간대별 서울지역의 미세먼지 농도 변화", x = "측정일시", y = "농도") +
scale_fill_manual(values = rainbow(10))

ggplot(data=df, aes(x=dataTime, y=seoul, fill=dataTime)) + 
geom_bar(stat="identity") +
theme(axis.text.x=element_text(angle=90),
	legend.position="none") +
labs(title="시간대별 서울지역의 미세먼지 농도 변화", x = "측정일시", y = "농도") +
scale_fill_manual(values = rainbow(10))

ggplot(data=df, aes(x=dataTime, y=seoul, fill=dataTime)) + 
geom_bar(stat="identity") +
theme(axis.text.x=element_text(angle=90),
	legend.position="none") +
labs(title="시간대별 서울지역의 미세먼지 농도 변화", x = "측정일시", y = "농도") +
scale_fill_manual(values = rainbow(10)) +
coord_flip()

# -------------------------------------------
# 미세먼지 농도 분석

library(XML)
library(ggplot2)
library(ggmap)

api <- "http://apis.data.go.kr/B552584/ArpltnStatsSvc/getCtprvnMesureLIst"
api_key <- "NiMC9MGQZ6y5WdBECwJNOyDr3w4XMoRUorMyLufi0z%2FZbFf%2BcV%2FCt4gl8GkEwfzwz1aAuvWOyPAgszEPtZjLcA%3D%3D"

returnType <- "xml"
numOfRows <- 10
pageNo <- 1
itemCode <- "PM10"
dataGubun <- "HOUR"
searchCondition <- "MONTH"
url <- paste(api,
		 "?serviceKey=", api_key,
		 "&returnType=", returnType,
		 "&numOfRows=", numOfRows,
		 "&pageNo=", pageNo,
		 "&itemCode=", itemCode,
		 "&dataGubun=",dataGubun,
		 "&searchCondition=", searchCondition,
		 sep="")
url

xmlFile <- xmlParse(url)
xmlRoot(xmlFile)

df <- xmlToDataFrame(getNodeSet(xmlFile, "//items/item"))
df

df <- subset(df, select=c(-dataTime, -dataGubun, -itemCode))
pm <- df[1, 1:17]
pm

register_google(key = "AIzaSyAgMCj3niCCSVYCvmTD2z2VqCLFgmOhIUE")
cities <- c("대구시","충청남도","인천시","대전시","경상북도",
		"세종시","광주시","전라북도","강원도","울산시",
		"전라남도","서울시","부산시","제주시","충청북도",
		"경상남도","경기도")
gc <- geocode(enc2utf8(cities))

df2 <- data.frame(지역명=cities,
			미세먼지=t(pm),
			경도=gc$lon,
			위도=gc$lat,
			stringsAsFactors = F)
df2

names(df2)[2] <- "미세먼지"
df2

str(df2)
df2[,2] <- as.numeric(df2[,2])
cen <- as.numeric(geocode(enc2utf8("전라북도")))
map <- get_googlemap(center=cen, zoom=7)

ggmap(map) + geom_point(data=df2,
				aes(x=경도, y=위도),
				color=rainbow(length(df2$미세먼지)),
				size=df2$미세먼지 * 0.3,
				alpha=0.5)

# -------------------------------------------
# 국립암센터 신장암 환자 분석

library(XML)

api <- "http://apis.data.go.kr/B551172/Kidney01/patientNumber"
api_key <- "NiMC9MGQZ6y5WdBECwJNOyDr3w4XMoRUorMyLufi0z%2FZbFf%2BcV%2FCt4gl8GkEwfzwz1aAuvWOyPAgszEPtZjLcA%3D%3D"

pageNo <- 1
numOfRows <- 100
centerNm <- URLencode("국립암센터")
fromYear <- "2010"
toYear <- "2019"
type <- "xml"
url <- paste(api,
		"?serviceKey=", api_key,
		"&pageNo=", pageNo,
		"&numOfRows=", numOfRows,
		"&centerNm=", centerNm,
		"&fromYear=", fromYear,
		"&toYear=", toYear,
		"&type=", type,
		sep="")
url

xmlfile <- xmlParse(url)
xmlRoot(xmlfile)

df <- xmlToDataFrame(getNodeSet(xmlfile, "//items/items"))
head(df)

df2 <- subset(df, select=c(3:5))
str(df2)

df2$ptAge = as.numeric(df2$ptAge)
str(df2)

critYr_f <- table(df2$critYr)
critYr_f

barplot(critYr_f, col=rainbow(10), main="국립암센터 신장암 환자 연도별 현황",
xlab="연도", ylab="인원", ylim=c(0,20))

ptAge_f <- factor(df2$ptAge %/% 10, #소수점 이하는 버리고 점수 몫만 취함
			levels = c(3, 4, 5, 6, 7, 8),
			labels = c('30대', '40대', '50대', '60대', '70대', '80대'))
summary(ptAge_f)

ptSexCd_f <- factor(df2$ptSexCd,
			levels = c('M', 'F'),
			labels = c('남성', '여성'))
summary(ptSexCd_f)

ptSexAge_f <- table(ptSexCd_f, ptAge_f)
ptSexAge_f

barplot(ptSexAge_f, main = "연령대에 따른 성별 분포 비교",
xlab = "연령대", ylab = "인원수", ylim = c(0, 35),
col = c("lightblue", "pink"),
legend=rownames(ptSexAge_f))