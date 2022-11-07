#include <stdio.h>

int main(){
    FILE* f=fopen("asd.txt","r");

    if(f==NULL){
        printf("Nem sikerült megnyitni a fájlt!");
        return 1;
    }
    char buffer [256];
    fgets(buffer,256,f);
    printf("Kiolvastam a '%s' stringet.",buffer);
    fclose(f);
    

    //w+ törli és felülírja
    //w bennehagyja és felülírja
    //a+ a végére ír de elejéről olvas


    return 1;
}