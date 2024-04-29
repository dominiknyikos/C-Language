#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mgh_csere(char* original){

char* newstr;

newstr=(char*)calloc(strlen(original),sizeof(char));

/*
for(int i=0; i<strlen(original)+1; i++){
    if(original[i]=='a' || original[i]=='e' || original[i]=='i' || original[i]=='o' || original[i]=='u') newstr[i]='!';
    else newstr[i]=original[i];

}
return newstr;
*/

for(int i=0; i<strlen(original)+1;i++){
    newstr[i]=tolower(original[i]);
}

return newstr;
}

int main(){

char sor[100];
gets(sor);
puts(sor);

char* ujsor;
ujsor=mgh_csere(sor);
puts(ujsor);
free(ujsor);

/*
sor[5]='s';
puts(sor);
for(int i=0; i<100; i++) printf("%c", sor[i]);
*/


return 0;
}
