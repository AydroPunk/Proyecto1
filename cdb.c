#include <stdio.h>
#include <string.h>

int main(){
    int num, t;
    char binario[100];

    // Lectura del número a convertir
    scanf("%d", &num);

    //Copiando  la cadena vacía a la variable binario
    strcpy(binario, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(binario, "1");
        else strcat(binario, "0");        
    }while(num!=1 && num!=0);
                                //"1\0"
    if(num== 1) strcat(binario, "1");

    for(int i =strlen(binario)-1; i >=0; i-- ){
        printf("%c", binario[i]);
    }
    printf("\n");
    return 0;
}
