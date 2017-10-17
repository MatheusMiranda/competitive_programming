dp = []
dp.append(1)
dp.append(0)
dp.append(1)

for i in range(3,810):
    a = (i - 1) * (dp[i-2] + dp[i-1])
    dp.append(a)

while(1):
    n = int(input())
    if(n == -1):
        break
    print(dp[n])
