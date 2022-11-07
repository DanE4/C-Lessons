#include <stdio.h>
#include <string.h>

int len(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    if (s[len] == '\0'){
        s[len-1] = '\0';
        len--;
    }
    return len;
}
int strcmp2(char* str1, char* str2){
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0'){
        if (str1[i] > str2[i]){
            return 1;
        }else if (str1[i] < str2[i]){
            return -1;
        }
    }
    if (str1[i] == '\0' && str2[i] == '\0'){
        return 0;
    } else if (str1[i] != '\0'){
        return 1;
    } else {
        return -1;
    }
}

int main() {

    char buffer[256];
    char buffer2[256];
    scanf("%s", buffer);
    // filepointer
    fgets(buffer, 256, stdin);
    fgets(buffer2, 256, stdin);
    printf("A %s szöveg hossza %d karakter.",buffer,len(buffer));
    /*
    int result=strcmp2(buffer,buffer2);
    if (result == 0){
        printf("A két szöveg megegyezik.");
    } else if (result == 1){
        printf("A %s string nagyobb mint a %s string.",buffer,buffer2);
    } else {
        printf("A %s string nagyobb mint a %s string.",buffer2,buffer);
    }*/
    char buffer_clone[256];
    strcpy(buffer_clone,buffer);
    char* buffer_clone_bad = buffer;
    buffer_clone_bad[5] = '\0';
    printf("(1) %s (2) %s",buffer,buffer_clone);
    //le kell foglali memóriát vagy már létezőbe kell tenni
    
    return 0;
}
