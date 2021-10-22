n = int(input())
lst=[]
for _ in range(n):
    lst.append(list(map(int,input().split())))
for i in lst:
   diff = i[1]-i[0]
   quo = diff // 2
   rem = diff % 2
   if rem == 0 :
      print (quo)
   else :
      print (quo+2)