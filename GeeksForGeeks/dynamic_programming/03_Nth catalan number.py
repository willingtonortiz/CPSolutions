test = int(input())

DP = [-1 for i in range(105)]
DP[0] = 1

def dp(n):
    if DP[n] != -1:
        return DP[n]
    
    else:
        resp = 0
        
        for i in range(n):
            resp += dp(i) * dp(n - 1 - i)
            
        DP[n] = resp
        
        return DP[n]

for i in range(test):
    temp = int(input())
    
    print(dp(temp))