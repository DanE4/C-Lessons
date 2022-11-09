#include <stdio.h>

int main(){
    FILE* f1=fopen("szamok.txt","r");
    FILE* f2=fopen("adatok.txt","r");
    int tmp1,tmp2;
    int result;
    do{
        fscanf(f1,"%d",&tmp1);
        fgetc(f1);
        fscanf(f2,"%d",&tmp2);
        fgetc(f2);
        printf("%d \n",tmp1*tmp2);
    }
    while(result != 0);
    fclose(f1);
    fclose(f2);
    //scanf(format,...)stdről olvas adott formatumu dolgokat
    //fscanf(file,format,...)file-ból olvas adott formatumu dolgokat
    //fgets(file,format,...)beolvas és visszaadt EGY karaktert egy filebol
    //pl: char a=fgetc(stdin);
    //fgets(dest,size,file)
    return 1;
}