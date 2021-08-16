n = input()

if ('1'not in n or '444' in n or n[0] != '1'):
    print("NO")
elif ('0' in n or '2' in n or '3' in n or '5' in n or '6' in n or '7' in n or '8' in n or '9' in n):
    print("NO")
else:
    print("YES")
