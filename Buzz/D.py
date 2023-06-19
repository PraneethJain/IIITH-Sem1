with open("input.txt", "r") as f:
    lines = f.readlines()
    n = int(lines[0])
    a = list(map(int, lines[1].split()))

negative_prefix = [0]*(n+1)
for i in range(n-1, -1, -1):
    if a[i] > 0:
        negative_prefix[i] = negative_prefix[i+1]
    else:
        negative_prefix[i] = negative_prefix[i+1]+1

    cur = 0
    ans = n
    for i in range(n-1):
        if a[i]>=0:
            cur += 1
        ans = min(cur+negative_prefix[i+1], ans)

with open("output.txt", "w") as f:
    f.write(str(ans))