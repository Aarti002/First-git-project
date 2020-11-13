def binary_search(lis, low, high, num):

    if high>=low:
        mid=(low+high)//2
        if lis[mid] == num:
            return mid
        elif lis[mid]<num:
            return binary_search(lis, mid+1,high,num)
        else:
            return binary_search(lis,low, mid-1, num)
    else:
        return -1


lis=[]
n = int(input('Enter size then elements: '))
for i in range(n):
    x=int(input())
    lis.append(x)

num=int(input('Enter which element you want to search: '))
lis.sort()
res=binary_search(lis,0,n-1,num)
if res!=-1:
    print('Got the position: ',str(res))
else:
    print('Element not present in list!')
