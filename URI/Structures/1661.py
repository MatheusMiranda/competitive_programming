while(int(input())):
    ns = input()
    ns = list(map(int, ns.split()))

    buying = [0] * 100005
    selling = [0] * 100005

    for i in range(len(ns)):
        if ns[i] >= 0:
            buying[i] = ns[i]
        else:
            selling[i] = ns[i]

    bp = 0
    sp = 0
    total_units = 0

    while(bp < len(ns) and sp < len(ns)):

        if buying[bp] and selling[sp]:
            traded = min(abs(buying[bp]), abs(selling[sp]))

            buying[bp] -= traded
            selling[sp] += traded

            total_units += (traded * abs(bp - sp))

        if not buying[bp]:
            bp += 1
        if not selling[sp]:
            sp += 1

    print(total_units)
