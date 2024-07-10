# 예제4

DF <- read.csv("C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/3장-2.실습데이터/example_coffee.csv", fileEncoding = "CP949")
Size <- DF$sizeOfsite

summary(Size)
plot(Size)

Size[Size > 10000] <- NA
summary(Size)

Size[Size==0] <- NA
Size <- Size[complete.cases(Size)]
summary(Size)

DegreeOfSize <- table(cut(Size,breaks=(0:72)*20))
DegreeOfSize

library("ggplot2")
library("ggthemes")
ggplot(data=DF,aes(x=sizeOfsite)) +
geom_freqpoly(binwidth=10,size=1.2,colour="orange") +
scale_x_continuous(limits=c(0,300),breaks=seq(0,300,20)) +
theme_wsj()