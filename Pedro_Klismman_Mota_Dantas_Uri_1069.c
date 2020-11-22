#include <stdio.h>

 
#define true 1
#define false 0 

int main()
{
int i, j, quanti, diamante;
char areia[1010];
quanti = 0;
scanf("%d", &quanti);
while (true){

scanf("%s", areia);
diamante = 0;

for (i = 0; i < strlen(areia); i++){
            //NULL
if (areia[i] == '\0')
                break;
if (areia[i] == '<'){

for (j = i; j< strlen(areia); j++){

if (areia[j] == '>'){

diamante++;
areia[j] = '0';
                break;
     }
    }
   }
  }
printf("%d\n", diamante);
 }
    return 0;
}
