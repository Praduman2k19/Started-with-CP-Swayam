N,K=map(int,input().split())
l=[int(i) for i in input().split()]

l1=[]
for i in range(N):
    l1.append((l[i],i))
l1.sort()

cnt = 1
start = l1[0][1]
for i in range(1,N):
    if((l1[i][1]-start<=K-1) and (l1[i][0]==l1[i-1][0])):
      pass
    else:
      start = l1[i][1]
      cnt+=1
print(cnt)