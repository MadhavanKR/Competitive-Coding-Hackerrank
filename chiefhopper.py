#https://www.hackerrank.com/challenges/chief-hopper*/
n=int(input())
a=list(map(int,input().split()))
cur=0
a.append(int(0))
#print(a)
x=cur
while True:
    for i in range(0,n+1):
        x=x+(x-a[i])
        #print("x=",x)
        if(x<0):
            break
    #print("i=",i)
    if i==n:
        break
    else:
        cur=cur+1
        x=cur
print(cur)