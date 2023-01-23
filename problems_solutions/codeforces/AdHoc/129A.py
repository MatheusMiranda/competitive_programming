bags = int(input())
cookies =  []
total = 0
solutions = 0

cookies = [int(num) for num in input().split(' ')]

for cookie in cookies:
    total += cookie

for el in cookies:
    option = total - el
    if option == 0 or option % 2 == 0:
        solutions += 1

print(solutions)
