n = int(input())
land = [int(x) for x in input().split()]

valid = True
should = 0

for i in range(1, n):
    if land[i - 1] < land[i] and (should == 1  or not should):
        should = -1
    elif land[i - 1] > land[i] and (should == -1 or not should):
        should = 1
    else:
        valid = False
        break

print(1 if valid else 0)
