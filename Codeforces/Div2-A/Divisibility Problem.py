tc = int(input())
for i in range(0,tc):
    a, b = map(int,input().split())
    if(a%b == int(0)): print(0)
    else: print(b-(a%b))
