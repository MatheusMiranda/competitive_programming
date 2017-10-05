import fileinput

dp = [0 for i in range(251 + 1)]
dp[0] = 1
dp[1] = 1
dp[2] = 3

for i in range(3,251):
    dp[i] = dp[i-1] + 2 * dp[i-2]

for line in fileinput.input():
    n = line.strip()
    n = int(n)
    
    print(dp[n])
