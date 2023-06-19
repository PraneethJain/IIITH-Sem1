def solve():
    n = int(input())
    x = list(map(int, input().split()))
    start = -1
    end = -1
    for i in range(n//2):
        if x[i] != x[n-i-1]:
            start = i
            end = n-i-1
            break
    sub = x[start:end+1]
    to_remove = x[start]
    i = start
    while True:
        if x[i] == x[end]:
            break
        if x[i] != to_remove:
            return "NO"
        else:
            sub.remove(to_remove)
            i += 1
    
    if sub == sub[::-1]:
        return "YES"
    
    
    sub = x[start:end+1:-1]
    to_remove = x[start]
    i = start
    while True:
        if x[i] == x[end]:
            break
        if x[i] != to_remove:
            return "NO"
        else:
            sub.remove(to_remove)
            i += 1
    
    if sub == sub[::-1]:
        return "YES"

    return "NO"

for _ in range(int(input())):
    print(solve())