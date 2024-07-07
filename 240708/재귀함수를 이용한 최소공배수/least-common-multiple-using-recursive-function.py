n=int(input())
arr=list(map(int,input().split()))

def lcm(a, b):
  return (a * b) // gcd(a, b)

def gcd(a, b):
  while (b != 0):
    r = a % b
    a = b
    b = r
  
  return a
  
def solution(arr,n):
    sol=arr[0]
    for i in range(1,n):
        sol=lcm(sol,arr[i])
    return sol

print(solution(arr,n))