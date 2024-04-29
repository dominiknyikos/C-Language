#include <stdio.h>
#include <stdlib.h>

int main(){

int szam1;
int* szam2;

scanf("%d", &szam1);
szam2 = &szam1;

printf("A szam1:%d\nA memoria cime:%p\n\n", szam1, &szam1);
printf("A szam2 erteke:%p\nMire mutat:%d\n\n", szam2, *szam2);

for (int i = 1; i <= 10; i++){
    printf("%d*%d = %d\n", szam1, i, szam1*i);
}
printf("\n");

if (szam1%2==0) printf("Paros");
    else printf("Paratlan");
printf("\n");

szam1%2==0 ? printf("Paros") : printf("Paratlan");

return 0;
}
