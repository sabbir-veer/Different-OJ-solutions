s = input()
count = int(0)
sum = int(0)
while(len(s) != 1):
    count = count+1
    for i in range(0,len(s)):
        sum = sum + int(s[i])
    s = str(sum)
    sum = int(0)
print(count)
