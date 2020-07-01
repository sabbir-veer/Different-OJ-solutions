n, t, k, d = [int(n) for n in input().split()]
if (n%k) != 0:
    a = (int(n/k)+1)*t
else:
    a = int(n/k)*t
if (d+t < a):
    print("YES")
else:
    print("NO")
