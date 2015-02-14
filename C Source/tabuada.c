#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int i, j, res;

    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
            res=i*j;
            printf("%dx%d=%d\n", i, j, res);
        }
        printf("\n");
    }
}
