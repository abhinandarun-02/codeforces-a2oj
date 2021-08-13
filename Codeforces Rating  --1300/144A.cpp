def min_element(lst):
    j=lst[0]
    count = -1
    for i in lst:
        count+=1
        if i<=j:
            j=i
            ind = count
    return ind + 1
    
            
n = int(input())
lst = list(map(int,input().strip().split()))[:n]

a = max(lst) 
i = lst.index(a) + 1
b = min(lst)
j = min_element(lst)


if (i>j):
    print(i-1+abs(j-n)-1)
else:
    print(i-1+abs(j-n))