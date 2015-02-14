#include <stdio.h>
#include <locale.h>
#include <tgmath.h>
#include <ctype.h>
#include <string.h>

#define TAM 5000

void main(void){
    setlocale(LC_ALL, "portuguese");
    int tama, tamd, i, ch;
    char str[TAM], dest[TAM];

    printf("escreva a sua frase!\n");
    scanf("%[^\n]", &str);
    fflush(stdin);

    for(tama=0;tama<TAM;tama++){
        if(str[tama] == 0){
            break;
        }
    }
    tamd = cpstr(dest, str, tama);

    printf("\nreturn: %d\n", tamd);

}

int cpstr(char dest[], char orin[], int tama){
    int i, di=0;
    char temp;

    for (i=0;i<tama;i++){
        if(i==0 && (orin[i]>96 && orin[i]<123)){
            dest[i]=orin[i]-32;
        }else if(i == 0 && (orin[i]>64 && orin[i]<91)){
            dest[i]=orin[i];
        }else if(i != 0){
            if(orin[i-1]==' '){
                if(orin[i]>96 && orin[i]<123){
                    temp = orin[i]-32;
                    dest[i]=temp;
                }else{
                    dest[i]=orin[i];
                }
            }else{
                dest[i]=orin[i];
            }
        }
    }

    for(di=0;di<i;di++){
        printf("%c", dest[di]);
    }

    return i;
}
