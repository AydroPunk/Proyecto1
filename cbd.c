#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num = 0, pot = 0;
    char binario[100];

    scanf("%s", &binario);

    for(int i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    }

    printf("%d\n", num);
    return 0;
}
