# 8장
# 예제 1) 뉴스 검색

install.packages("RCurl")
install.packages("wordcloud")
install.packages("RmecabKo")

library(RCurl)
library(XML)
library(wordcloud)
library(RmecabKo)

install_mecab("C:/Rlibs/mecab")

searchUrl	  <- "https://openapi.naver.com/v1/search/news.xml"
Client_ID	  <- "faHjZnNIZJeZOLgSgGJ5"
Client_Secret <- "BjW7_Z4xjw"

query <- URLencode(iconv("인공지능", "euc-kr", "UTF-8"))
url <- paste(searchUrl, "?query=", query, "&display=20", sep="")

doc <- getURL(url,
		  httpheader = c('Conten-Type' = "application/xml",
		  'X-Naver-Client-Id' = Client_ID,
		  'X-Naver-Client-Secret' = Client_Secret))
doc
df <- xmlToDataFrame(getNodeSet(xmlFile, "//item"))
str(df)

#------------------------------------
# 예제 2) 뉴스내용 텍스트 마이닝

description <- df[,4]
description

description2 <- gsub("\\d|<b>|</b>|&quot;", "", description)
description2

nouns <- nouns(iconv(description2, "utf-8"))
nouns

nouns.all <- unlist(nouns, use.names = F)
nouns.all

nouns.all1 <- nouns.all[nchar(nouns.all) <= 1]
nouns.all1

nouns.all2 <- nouns.all[nchar(nouns.all) <= 2]
nouns.all2

nouns.freq <- table(nouns.all2)
nouns.freq

nouns.df <- data.frame(nouns.freq, stringsAsFactors = F)
nouns.df

nouns.df.sort <- nouns.df[order(-nouns.df$Freq), ]
nouns.df.sort



wordcloud(nouns.df.sort[,1],
	    freq=nouns.df.sort[,2],
	    min.freq=1,
	    scale=c(5,0.7),
	    rot.per=0.25,
	    random.order=F,
	    random.color=T,
	    colors=rainbow(10))

install.packages("wordcloud2")
library(wordcloud2)
wordcloud2(nouns.df.sort)

library(RmecabKo)
library(wordcloud2)

word_data <- readLines("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/8장.실습데이터/애국가(가사).txt")
word_data

word_data2 <- gsub("\\d|<b>|</b>|&quot;", "", word_data)
word_data2

nouns <- nouns(iconv(word_data2, "utf-8"))
nouns

nouns.all <- unlist(nouns, use.names = F)
nouns.all

nouns.all2 <- nouns.all[nchar(nouns.all) >= 2]
nouns.all2

nouns.freq <- table(nouns.all2)
nouns.freq

nouns.df <-data.frame(nouns.freq, stringsAsFactors = F)
nouns.df

nouns.df.sort <- nouns.df[order(-nouns.df$Freq), ]
nouns.df.sort

wordcloud2(nouns.df.sort)

install.packages("wordcloud2")
library(wordcloud2)
wordcloud2(nouns.df.sort)

#------------------------------------
# 예제 4) 애국가 텍스트 마이닝

library(RmecabKo)
library(wordcloud2)

word_data <- readLines("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/8장.실습데이터/애국가(가사).txt")
word_data

word_data2 <- gsub("\\d|<b>|</b>|&quot;", "", word_data)
word_data2

nouns <- nouns(iconv(word_data2, "utf-8"))
nouns

nouns.all <- unlist(nouns, use.names = F)
nouns.all

nouns.all2 <- nouns.all[nchar(nouns.all) >= 2]
nouns.all2

nouns.freq <- table(nouns.all2)
nouns.freq

nouns.df <-data.frame(nouns.freq, stringsAsFactors = F)
nouns.df

nouns.df.sort <- nouns.df[order(-nouns.df$Freq), ]
nouns.df.sort

wordcloud2(nouns.df.sort)

wordcloud2(nouns.df.sort, color="random-light", backgroundColor="black")

wordcloud2(nouns.df.sort, fontFamily="맑은고딕", size=1.2,
color="random-light", backgroundColor="black", shape="star")

#------------------------------------
# 예제 5) 영문 텍스트 마이닝

install.packages("tm")

library(tm)

text <- readLines("C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/8장.실습데이터/8장.실습데이터/wordcloud.txt")
text

corpus <- VCorpus(VectorSource(text))
corpus

inspect(tm_map(tm_map(corpus, tolower), removePunctuation)[1])

corpus <- tm_map(corpus, content_transformer(stripWhitespace))
corpus <- tm_map(corpus, content_transformer(tolower))
corpus <- tm_map(corpus, content_transformer(removePunctuation))
corpus <- tm_map(corpus, content_transformer(removeNumbers))
corpus <- tm_map(corpus, removeWords, stopwords('english'))

tdm <- TermDocumentMatrix(corpus)
tdm

m <- as.matrix(tdm)
m

wordFreq <- sort(rowSums(m), decreasing = TRUE)
wordFreq

library(wordcloud)
library(RColorBrewer)
pal <- brewer.pal(8, "Dark2")
wordcloud(words=names(wordFreq),
	    freq = wordFreq,
	    scale = c(8, .4),
	    min.freq = 2,
	    rot.per = .5,
	    random.order=F,
	    random.color=T,
	    colors=pal)

#------------------------------------
# 예제 6) 치킨집 분포 트리맵

install.packages("readxl")

library(readxl)

ck <- read_xlsx("C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/8장.실습데이터/8장.실습데이터/치킨집_가공_22년.xlsx")
head(ck)

addr <- substr(ck$소재지전체주소, 11, 16)
head(addr)

addr_num <- gsub("[0-9]", "", addr)
addr_trim <- gsub(" ", "", addr_num)
head(addr_trim)

install.packages("dplyr")

library(dplyr)
addr_count <- addr_trim %>% table() %>% data.frame()
head(addr_count)

install.packages("treemap")

library(treemap)
treemap(addr_count, index=".", vSize="Freq", title="서대문구 동별 치킨집 분포")

arrange(addr_count, desc(Freq)) %>% head(17)