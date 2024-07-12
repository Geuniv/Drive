DF <- read.csv("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/2장.실습데이터/example_studentlist.csv", fileEncoding = "CP949")
DF

attach(DF)
mean(height, na.rm=T)
median(height, na.rm=T)
range(height, na.rm=T)
quantile(height, na.rm=T)
IQR(height, na.rm=T)
summary(height, na.rm=T)
boxplot(height)
cor(height, weight)
cor.test(height, weight)
cor(DF[,c(3, 7, 8)])
cor(height, weight, use="complete.obs")

DF2 <- DF
DF2[2, 7] <- NA
DF2[4, 8] <- NA
DF2
attach(DF2)

cor(height, weight)

cor(height, weight, use="complete.obs")

cor(height, weight, use="everything")

cor(height, weight, use="all.obs")

var(height, na.rm=T)

var(height, weight, na.rm=T)

var(DF[,c(3, 7, 8)], na.rm=T)

sd(height, na.rm=T)

scale(height)

sd(height, na.rm=T) / mean(height, na.rm=T)

sd(weight, na.rm=T) / mean(weight, na.rm=T)