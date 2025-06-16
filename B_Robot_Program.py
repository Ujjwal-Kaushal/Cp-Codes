t = int(input())  
for _ in range(t):  
    n, x, k = map(int, input().split())  
    tt = input().strip()  

    ans = 0
    for i in range(n):
        x -= 1 if tt[i] == 'L' else -1  
        k -= 1
        if x == 0:
            break

    if x == 0:
        ans = 1
        for i in range(n):
            x -= 1 if tt[i] == 'L' else -1
            if x == 0:
                ans += k // (i + 1)  
                break

    print(ans)
