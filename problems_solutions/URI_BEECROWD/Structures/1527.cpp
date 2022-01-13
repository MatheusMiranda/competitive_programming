#include <bits/stdc++.h>

using namespace std;

int ps[100100];
int ranks[100100];
int points[100100];

int find_set(int x)
{
    return x == ps[x] ? x : (ps[x] = find_set(ps[x]));
}

int find_union_points(int i) {
    return points[find_set(i)];
}

void union_set(int x, int y)
{
    int p = find_set(x);
    int q = find_set(y);
    
    if (p == q)
        return;

    if (ranks[p] < ranks[q])
        std::swap(p, q);

    ps[q] = p;
    ranks[p] += ranks[q];
    points[p] += points[q];
}


int main() {
    int n, m;

    while(1) {
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0) break;

        int p;
        for (int i = 1;i <= n;i++){
            scanf("%d", &p);
            ps[i] = i;
            points[i] = p;
        }

        int rafa_points = 0;
        int q, a, b;

        for (int i = 1;i <= m;i++){
           scanf("%d %d %d", &q, &a, &b);

           int rafa_parent = find_set(1);

           if (q == 1){
               union_set(a, b);
           } else {
               int p1 = find_set(a);
               int p2 = find_set(b);

               int pt1 = find_union_points(p1);
               int pt2 = find_union_points(p2);

               if ((pt1 > pt2 && p1 == rafa_parent) || (pt2 > pt1 && p2 == rafa_parent)) {
                   rafa_points += 1;
               }
           }
        }

        printf("%d\n", rafa_points);

    }

    return 0;
}
