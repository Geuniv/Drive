# 예제2

DF <- read.csv("C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/3장-2.실습데이터/example_cancer.csv", fileEncoding = "CP949")
str(DF)

DegreeOfAge <- table(cut(DF$age, breaks=(1:11)*10))
DegreeOfAge

rownames(DegreeOfAge) <- c("10s","20s","30s","40s","50s","60s","70s","80s","90s","100s")
DegreeOfAge

library("ggplot2")
library("ggthemes")
ggplot(data=DF, aes(x=age)) + geom_freqpoly(binwidth=10, size=1.4, colour="orange") + theme_wsj()
