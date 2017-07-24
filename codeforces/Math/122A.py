n = int(input())

flag = False
for i in range(1,n + 1):
    if flag: break

    if(n % i == 0 and set("47") >= set(str(i))):
        flag = True

if flag:
    print("YES")
else:
    print("NO")
