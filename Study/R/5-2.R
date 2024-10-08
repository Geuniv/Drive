# 예제 1

DF <- read.csv("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/5장-2.실습데이터/example_salary.csv", fileEncoding = "CP949", na="-")
head(DF, 5)

colnames(DF)
colnames(DF) <- c("age", "salary", "specialSalary", "workingTime", "numberOfWorker", "career", "sex")
str(DF)
attach(DF)

Mean <- mean(salary, na.rm=T)
Mean

Mid <- median(salary, na.rm=T)
Mid

Range <- range(salary, na.rm=T)
Range

w <- which(DF$salary==4064286)
DF[w,]

Qnt <- quantile(salary, na.rm=T)
Qnt

Salary <- list(평균월급=Mean, 중앙값월급=Mid, 월급범위=Range, 월급사분위=Qnt)
Salary


# 예제 2

DF <- read.csv("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/5장-2.실습데이터/example_salary.csv", fileEncoding = "CP949", na="-")
head(DF, 5)

colnames(DF)
colnames(DF) <- c("age", "salary", "specialSalary", "workingTime", "numberOfWorker", "career", "sex")

temp <- tapply(DF$salary, DF$sex, mean, na.rm=T)
temp

library("ggplot2")
library("reshape2")
melt <- melt(temp)
ggplot(melt, aes(x=Var1, y=value, fill=Var1)) + geom_bar(stat="identity")

tapply(DF$salary, DF$sex, sd, na.rm=T)
tapply(DF$salary, DF$sex, range, na.rm=T)

temp <- tapply(DF$salary, DF$career, mean, na.rm=T)
temp

melt <- melt(temp)
ggplot(melt, aes(x=Var1, y=value, group=1)) + geom_line(colour="skyblue2", size=2) + coord_polar() + ylim(0, max(melt$value))

tapply(DF$salary, DF$career, sd, na.rm=T)
tapply(DF$salary, DF$career, range, na.rm=T)

a1 <- DF[which(DF$salary == 1172399),]
a2 <- DF[which(DF$salary == 1685204),]
a3 <- DF[which(DF$salary == 1117605),]
a4 <- DF[which(DF$salary == 1245540),]
a5 <- DF[which(DF$salary == 1548036),]
list <- list(a1, a2, a3, a4, a5)
list


# 예제 3

DF <- read.csv("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/3장-2.실습데이터/example_cancer.csv", fileEncoding = "CP949", na="기록없음")
str(DF)
attach(DF)

mean(age)
summary(age)
boxplot(age, range=1.5)
grid()

distIQR <- IQR(age, na.rm=T)

posIQR <- quantile(age, prob=c(0.25, 0.75), na.rm=T)
posIQR

DownWhisker <- posIQR[[1]] - distIQR*1.5
UpWhisker <- posIQR[[2]] + distIQR*1.5
DownWhisker; UpWhisker

Outlier <- subset(DF, subset=(DF$age < DownWhisker | DF$age > UpWhisker))
Outlier


# 예제 4

DF <- read.csv("C:/Users/data8316-15/Desktop/학교/수업자료/2학년 1학기/김영운교수님/빅데이터분석실습/5장-2.실습데이터/example_salary.csv", fileEncoding = "CP949", na="-")
head(DF, 5)

colnames(DF) <- c("age", "salary", "specialSalary", "workingTime", "numberOfWorker", "career", "sex")

Scale <- scale(DF$salary)
head(Scale, 10)

DF <- cbind(DF, scale=Scale)
str(DF)

g1 <- ggplot(DF, aes(x=scale, y=age))
g2 <- geom_segment(aes(yend=age), xend=0)
g3 <- g1 + g2 + geom_point(size=7, aes(colour=sex, shape=career)) + theme_minimal()
g3