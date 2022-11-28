#include <stdio.h>
#include <stdlib.h>
#include "headers.h"    //itt be lesz hivva a pow2 
#include <headers.h>    //itt nem
extern int a;   //van valahol valamelyik fileban egy a változó, de nem tudom hol
//staticra nem vonatkozik, mert a static változók csak a fájlban látszanak
//pl másik fileban int a = 5;

int scalar(int a, int b){
    return a*b;
}
void matrix(int a[3][3], int b[3][3]){
    int c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c[i][j] = 0;
            for(int k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", c[i][j]);
        }
        printf("");
    }
}

#define bigger(a,b) (a>b)?a:b
int main(){
    int a =bigger(2,3);
    printf("%d ",pow(2));
    printf("%d ",scalar(2,3));
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    matrix(a,b);
}

/*
#define bigger(a,b) (a>b)?a:b
#define stringify(value) #value
#define  range(a)for(int i=0;i<a;i++)
int main(){
    float a =bigger(2.2,3.4);
    stringify(12);//"12"
    stringify(valami);//"valami"
    stringify("valami");//"valami"
    stringify(a);//"a"
    range(10){
    }
}
*/