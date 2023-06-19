n = int(input())
d = list(map(int, input().split()))

ans = 0
for i in range(1,n-1):
    if (d[i]>d[i-1] and d[i]>d[i+1]) or (d[i]<d[i-1] and d[i]<d[i+1]):
        ans += 1
print(ans)