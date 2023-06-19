def solve(k):
    if k < 0:
        return False
    elif k==0:
        return True
    return solve(k-3) or solve(k-7)

for _ in range(int(input())):
    k = int(input())
    if solve(k):
        print("YES")
    else:
        print("NO")