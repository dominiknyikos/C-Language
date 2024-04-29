#include <stdio.h>
#include <stdlib.h>

typedef struct{
int pieces;
char name[100];
int mini;
char family[100];
}LEGO;

int cmp(const void *a, const void *b){
    LEGO *left = (LEGO *)a;
    LEGO *right = (LEGO *)b;

    return -(left->pieces - right->pieces);
}

int main(int argc, char *argv[]){

if (argc!=3){
    printf("Argumentum darab hiba\n");
    return 10;
}

FILE *f_in;
f_in=fopen("1.txt","r");
if (!f_in) return 1;

LEGO sets[10];

char sor[100];
int n=0;

while(fgets(sor, 100, f_in)){
sor[strlen(sor)-1]='\0';
sets[n].pieces=atoi(strtok(sor,";"));
strcpy(sets[n].name,strtok(NULL,";"));
sets[n].mini=atoi(strtok(NULL,";"));
strcpy(sets[n].family,strtok(NULL,";"));
n++;
}

/*
for(int i=0; i<n; i++){
printf("%d %s %d\n", sets[i].mini, sets[i].name, sets[i].pieces);
}
*/
fclose(f_in);

//qsort(sets, n, sizeof(LEGO), cmp);

FILE *f_out;
f_out=fopen(argv[2],"w");
for(int i=0; i<n; i++){
fprintf(f_out, "%d %s %s %d\n", sets[i].mini, sets[i].family, sets[i].name, sets[i].pieces);
}
fclose(f_out);

return 0;
}
