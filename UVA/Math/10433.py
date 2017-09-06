import fileinput

for line in fileinput.input():
    n = line.strip()
    m = int(n) ** 2;
    m = str(m)[::-1]
    m = m[:len(n):]

    if(m == n[::-1]):
        print("Automorphic number of {:d}-digit.".format(len(n)),)
    else:
        print("Not an Automorphic number.")
