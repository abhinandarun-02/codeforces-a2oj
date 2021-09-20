n = int(input())
lc = lo = rc = ro = 0
for i in range(n):
    a, b = map(int, input().split())
    if a == 0:
        lc += 1
    else:
        lo += 1
    if b == 0:
        rc += 1
    else:
        ro += 1

print(min(lo, lc)+min(ro, rc))
