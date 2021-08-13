n = int(input())

city = list(map(int, input().strip().split()))[:n]

m = min(city)

if (city.count(m)>1):
    print("Still Rozdil")
else:
    print(city.index(m)+1)
    