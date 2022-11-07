#include <stdio.h>

void to_upper(char *str)
{
    while (*str != 0) {
        if (*str >= 'a' && *str <= 'z')
            *str -= 'a' - 'A';// (-32)
        str++;
    }
}

int main(){
    FILE* f=fopen("asd.txt","r");
    
    //w+ törli és felülírja
    //w bennehagyja és felülírja
    //a+ a végére ír de elejéről olvas

    if(f==NULL){
        printf("Nem sikerült megnyitni a fájlt!");
        return 1;
    }
    char buffer [256];
    fgets(buffer,256,f);
    printf("Kiolvastam a '%s' stringet.",buffer);
    to_upper(buffer);
    printf("KIOLVASTAM A '%s' STRINGET.",buffer);
    fclose(f);
    f=fopen("asd2.txt","w+");
    fprintf(f,"%s",buffer);
    //fscanf
    

    return 1;
}