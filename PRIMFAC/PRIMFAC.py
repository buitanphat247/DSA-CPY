import math
MAXN = int(1e6)
def sang_nguyen_to():
    limit = int(math.sqrt(MAXN))
    is_prime = list[bool](True  for _ in range(MAXN+1))
    is_prime[0] = is_prime[1] = False
    
    primes = list[int]()
    
    for i in range(2,limit+1):
        if is_prime[i]:
            for j in range(i*i,limit+1,i):
                is_prime[j] = False

    for i in range(2,limit+1):
        if is_prime[i]:
            primes.append(i)
    return primes


n = int(input())
primes = sang_nguyen_to()
dp = dict[int,int]()
for prime in primes:
    while n % prime == 0:
        dp[prime] = dp.get(prime, 0) + 1
        n //= prime
    if n == 1:
        break

if n > 1:
    dp[n] = dp.get(n, 0) + 1

print(len(dp))
for key,value in dp.items():
    print(key,value)



