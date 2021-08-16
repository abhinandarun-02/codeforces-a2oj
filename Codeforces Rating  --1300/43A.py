from collections import Counter

n = int(input())

lst = []

for i in range(n):
    lst.append(input())

c = Counter(lst)
winner = c.most_common(1)

print(winner[0][0])
