# 예제3

library("ggplot2")
library("ggthemes")
DF <- read.csv("C:/Users/data8316-14/Desktop/수업교재 & 파일/2학년 1학기/김영운 교수님/실습데이터/3장-2.실습데이터/example_coffee.csv", fileEncoding = "CP949")

str(DF)

DF <- (DF, select=c(-adress,-adressBystreet,-dateOfclosure,-startdateOfcessation,-duedateOfcessation,-dateOfreOpen,-zip))
str(DF)

range(DFFilter$yearOfStart, na.rm=T)

subset(DFFilter,subset=(yearOfStart==1967))
table(DF$yearOfStart)
qplot(yearOfStart,data=DF,geom="bar")

Freq <- table(DF$stateOfbusiness,DF$yearOfStart)
Freq

which(colnames(Freq)=="1997")
which.max(colnames(Freq))
Freq <- Freq[,c(30:47)]
PFreq <- prop.table(Freq,margin=2)
PFreq

NewDF <- data.frame(colnames(Freq),Freq[1,],Freq[2,],PFreq[1,],PFreq[2,])
NewDF

rownames(NewDF) <- NULL
colnames(NewDF) <- c("Time","Open","Close","POpen","Pclose")
NewDF

ggplot(NewDF,aes(x=factor(Time),y=Close,group=1))+
geom_line(colour="steelblue1", size=1)+
geom_point(colour="steelblue",size=3)+
geom_line(aes(y=Open),colour="tomato2",size=1)+
geom_point(aes(y=Open),colour="red",size=6)+
theme_bw()