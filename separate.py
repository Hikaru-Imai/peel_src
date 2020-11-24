import numpy as np
import pandas as pd



name="../data/peel_data.csv"
df=pd.read_csv(name,encoding="shift-jis")

num=16     #measure number
mark=np.array([])
count=0
tweak=4
i=0
while(1):
    if(df.iloc[i,0]=="0"):
        mark=np.append(mark,i)

    if(len(mark)>=num):
        break

    i=i+1





mark=mark.astype(np.int64)

name=["../data/Test1.txt","../data/Test2.txt","../data/Test3.txt","../data/Test4.txt","../data/Test5.txt","../data/Test6.txt","../data/Test7.txt","../data/Test8.txt","../data/Test9.txt","../data/Test10.txt","../data/Test11.txt","../data/Test12.txt","../data/Test13.txt","../data/Test14.txt","../data/Test15.txt","../data/Test16.txt",]
#data=df.iloc[mark[0]:mark[1]-tweak,:].values


for i in range(len(mark)):
    if(i==(len(mark)-1)):
        data=df.iloc[mark[i]:,:].values
        data=data.astype(np.float16)

        np.savetxt(name[i],data,fmt="%.5f")
        print("Output" +name[i])

    if(i<(len(mark)-1)):
        data=df.iloc[mark[i]:mark[i+1]-tweak,:].values
        data=data.astype(np.float16)


        np.savetxt(name[i],data,fmt="%.5f")
        print("Output" +name[i])

        data=0
    
#print("complete")
