from collections import Counter

word = input()
c = Counter(word)
n = len(word)

count = 0

for i in c:
    if c[i] % 2 != 0:
        count += 1

if (count % 2 != 0 or count < 2):
    print("First")
else:
    print("Second")
