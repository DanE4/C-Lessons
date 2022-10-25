#include <stdio.h>
#include <stdlib.h>



int* compare(int* p1,int* p2){
    return *p1>*p2 ? p1:p2;
}

int main() {

    // gyak5
    int * p;
    int a=3;
    printf("%p %d\n", &a,a);
    p=&a;
    //a változóban tárolt érték átírása
    *p =4;
    printf("%p %d\n",p,*p);
    int b[]={1,2,3,4,5};

    int *p_b=b;
    printf("%d\n",*p_b);
    p_b++;
    printf("%d\n",*p_b);
    //adott bite-nyi memória lefoglalása
    int * p2 = malloc(sizeof(int));
    * p2=3;
    //ha nem akkor memory leak
    free(p2);

    //ha egy egész tömbnyit
    int * p3 = malloc(sizeof(int)*5);
    for (int i = 0; i <5; ++i) {
        p3[i]=i+1;
        printf("%p , p[%d] = %d\n",&p3+i,i,p3[i]);
    }
    //ha nem akkor memory leak
    free(p3);
    printf("freed p3: %p3\n",p3);

    //calloc ki is nullázza a memóriahelyet
    int b2=5;
    int * p4 = calloc(b2, sizeof(int));
    for (int i = 0; i <b2; ++i) {
        printf("%p p[%d] = %d\n",p4+i,i,p4[i]);
    }
    //ha nem akkor memory leak
    free(p4);
    p4=0;
    printf("freed p4: %p4\n",p4);


    int arr[3];
    int szam=0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]); ++i) {
        if(arr[i]%2!=0){
            szam=1;
        }
    }
    if(szam==1) {
        printf("Nem minden szám páros");
    }
    else{
        printf("minden szám páros");
    }
    return 0;
}
