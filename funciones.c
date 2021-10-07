#include "funciones.h"
#include <string.h>
#include <math.h>

int conv_binario_decimal(char *binario)
{
    int num = 0, pot = 0;
    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    }
    return num;
}

void conv_decimal_binario(int num, char *binario)
{
    int t, i, j;    
    char temp[100];
    strcpy(temp, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(temp, "1");
        else strcat(temp, "0");        
    }while(num!=1 && num!=0);
    
    if(num== 1) strcat(temp, "1");
    //return binario; Ya no es necesario el return

    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        binario[j] = temp[i];
    }
}