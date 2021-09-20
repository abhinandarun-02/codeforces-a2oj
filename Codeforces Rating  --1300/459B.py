from collections import Counter

n = int(input())
nums = list(map(int, input().strip().split()))

nums.sort()

maxx = nums[-1]-nums[0]
max_v = nums[-1]
min_v = nums[0]

c = Counter(nums)

if (c[max_v] == n):
    print(maxx, (c[max_v]*(c[max_v]-1))//2)
else:
    print(maxx, c[max_v]*c[min_v])
