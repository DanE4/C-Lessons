#include <stdio.h>

int main(){
    FILE* f1=fopen("szamok.txt","r");
    FILE* f2=fopen("adatok.txt","r");
    int tmp1,tmp2;
    int result;
    do{
        fscanf(f1,"%d",&tmp1);
        fscanf(f2,"%d",&tmp2);
    }
    while(result != EOF);
    fclose(f1);
    fclose(f2);
    
    return 1;
}