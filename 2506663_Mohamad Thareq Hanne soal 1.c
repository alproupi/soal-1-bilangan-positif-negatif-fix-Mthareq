#include <stdio.h>
#include <stdlib.h>

int main(){
    int angka;
    printf("Masukan bilangan: ");
    scanf("%d", &angka);

    if(angka > 0){
        printf("bilangan positif");
    }
    else if(angka == 0){
        printf("bilangan nol");
    }
    else{
        printf("Bilangan negatif");
    }


return 0;





}