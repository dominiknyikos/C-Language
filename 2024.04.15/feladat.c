#include <stdio.h>
#include <stdlib.h>

int paros_vane(int *tomb, int hossz){

for(int i=0; i<hossz; i++){
    if (tomb[i]%2==0) return 1;
}
return 0;
}

int negativ(int *tomb, int hossz){

for(int i=0; i<hossz; i++){
    if (tomb[i]<0) return 1;
}
return 0;
}

int prim(int *tomb, int hossz){
int seged;
for(int i=0; i<hossz; i++){
        seged=0;
    for(int j=1; j<tomb[i]+1; j++){
        if(tomb[i]%j==0) seged++;
    }
    if (seged==2) return 1;
}
return 0;
}

int novekvo(int *tomb, int hossz){
    for(int i=1; i<hossz; i++){
        if (tomb[i]<=tomb[i+1]) return 1;
    }
return 0;
}

int main(){

/*
int tomb[5];
tomb[0]=1;
tomb[1]=2;

printf("%d %p\n", tomb, &tomb);

for (int i=1; i>-5; i--) printf("%d %p\n", tomb[i], &tomb);
*/


int n;
scanf("%d", &n);

int tomb[n];


for(int i; i<n; i++){
    scanf("%d", &tomb[i]);
}

/*
for(int i; i<n; i++){
    printf("%d\n", tomb[i]);
}
*/

paros_vane(tomb, n)==0 ? printf("Nincs paros") : printf("Van paros");
printf("\n");
negativ(tomb, n)==0 ? printf("Van pozitiv") : printf("Van negativ");
printf("\n");
prim(tomb, n)==0 ? printf("Nincs prim") : printf("Van prim");
printf("\n");
novekvo(tomb, n)==0 ? printf("Nem novekvo") : printf("Novekvo");

return 0;
}
