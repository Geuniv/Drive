# 예제5

DF <- read.csv("C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/3장-2.실습데이터/example_population.csv", fileEncoding = "CP949")
str(DF)

head(DF,5)

install.packages("stringr")

library("stringr")

temp <- str_split_fixed(DF[,1],"\\(",2)

head(temp,10)

NewCity <- str_split_fixed(temp[,1]," ",2)
head(NewCity,10)

colnames(NewCity) <- c("Provinces","City")

DF <- data.frame(NewCity, DF[,c(2:7)])
head(DF,3)

DF[DF==" "] <- NA
head(DF,10)

DF <- DF[complete.cases(DF),]
head(DF,10)

for(i in 3:8) {
DF[,i] <- sapply(DF[,i], function(x) gsub(",","",x))
DF[,i] <- as.numeric(DF[,i])
}
str(DF)

ProPopul <- tapply(DF$Population, DF$Provinces, sum)
ProPopul

library("ggplot2")
library("ggthemes")
Graph <- ggplot(DF, aes(x=Provinces, y=Population,fill=Provinces)) + geom_bar(stat="identity") + theme_wsj()
Graph + scale_y_continuous(labels=scales::comma)

write.csv(DF,"C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/3장-2.실습데이터/example_population_f.csv")