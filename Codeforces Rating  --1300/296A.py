import math
from collections import Counter

n = int(input())
lst = list(map(int, input().split()))
clst = Counter(lst)

for i in clst.values():
    if (i > math.ceil(n/2)):
        print("NO")
        break
else:
    print("YES")
