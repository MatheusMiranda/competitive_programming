#include <stdio.h>
#include <stdlib.h>

int main(){

int dia1, dia2,h1, h2, m1, m2, s1, s2;
int totalSeg, dt, ht, mt;
scanf("Dia %d", &dia1);
scanf("%d : %d : %d\n", &h1, &m1, &s1);
scanf("Dia %d", &dia2);
scanf("%d : %d : %d", &h2, &m2, &s2);

s1 += m1*60 + h1*60*60 + dia1*24*60*60;
s2 += m2*60 + h2*60*60 + dia2*24*60*60;
totalSeg = s2 - s1;

dt = totalSeg/(24*60*60);
totalSeg -= dt*24*60*60;
ht = totalSeg/(60*60);
totalSeg -= ht*60*60;
mt = totalSeg/60;
totalSeg -= mt * 60;
printf("%d dia(s)\n", dt);
printf("%d hora(s)\n", ht);
printf("%d minuto(s)\n", mt);
printf("%d segundo(s)\n", totalSeg);
  return 0;
}
