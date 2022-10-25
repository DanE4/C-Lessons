#include <stdio.h>
#include <stdbool.h>


struct People
{
    char name[50];
    int age;
    float salary;
};
void fuggv(const int a[]){
    printf("arr size (fuggv): %lu\n",sizeof(a)/a[0]);
}
int main() {
    printf("Hello, World!\n");
    int v1[10] = {1,2,3,4,5,6,7,8,9,10};
    int v2[] = {1,2,3,4,5,6,7,8,9,10};
    char v3[] = "Hello World";
    int length = sizeof(v1)/sizeof(v1[0]);
    printf("Number of elements present in given array: %d", length);

    int asd= 420420;
    printf("asddddddd %d",asd);

    int asd2=2;
    printf("Size of asd2: %lu",sizeof(asd2));
    //operátor, nem függv, mint pl összeadás, kivonás
    int asd3=2;
    printf("%d \n",asd);
    //printf(2); nem okéé
    printf("%d",2); //okéé
    int a;
    printf("\n a: %d\n",a);
    // definiálni,kiiratni az értékét
    a=5;
    printf("a: %d",a);
    //hexadecimalba: "%p" ==pointer &a-nál
    //intbe simán "%d"
    int b=3;
    if(a%2==0){
        printf("PÁROS\n");
    }
    else{
        printf("PÁRATLAN\n");
    }
    printf("\n");

    int x = x%2==0 ? printf("PÁROS\n") : printf("PÁRATLAN\n");

    if(x%2){
        printf("PÁRATLAN");
    }
    else{
        printf("PÁROS");
    }

    //underflow
    char c;
    int intt=-129;
    c=intt;

    printf("");
    float flo=3/2;
    printf("EAAA");
    //print out float
    printf("%f",flo);

    int y=4;
    printf("%d\n",3<(y<7));
    printf("------------------------------\n");
    int number1=5;
    int *number2;
    number2=&number1;

    printf("number1(value): %d\n",number1);
    printf("number1(address): %p\n",&number1);
    printf("number2(pointer to the adress of number1): %p\n",number2);
    printf("own address of number2: %p\n",&number2);
    printf("number2(value): %d\n",*number2);
    printf("XD");

    int primes[100];

    int primeCount=0;
    for(int i=2;i<100;i++){
        int isPrime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                /*
                printf("i: %d ",i);
                printf("j: %d \n",j);
                 */
                break;
            }
        }
        if(isPrime){
            printf("%d ",isPrime);
            printf("%d ",i);
            primes[primeCount]=i;
            primeCount++;
        }
    }
    struct People people[100];
    printf("Prime count: %d\n",primeCount);
    int szam1=1;
    int szam2=2;
    //declare a string "asd"
    char szoveg[]="asd";
    printf("szoveg: %s\n",szoveg);



    /*printf("%d",szam1);
    for(int i=0;i<primeCount;i++){
        printf("%d ",primes[i]);
    }*/
    auto int szam4=2;
    printf("szam4: %d\n",szam4);
    printf("%d\n",sizeof(5));
    printf("%lu\n",sizeof(555555555));
    printf("%lu\n",sizeof(int));
    //gyak3
    printf("GYAK3\n");
    int szam5=4;
    int szam6=3;
    int szam7=2;
    //szam5<szam6 && szam6<szam7
    if(szam5<szam6<szam7){
        printf("%d<%d<%d\n",szam5,szam6,szam7);
    }
    printf("%s\n","42");
    printf("%d\n",42);
    printf("%c\n",'*');
    int szam8=41;
    printf("%d\n",++szam8);
    printf("%d\n",szam8++); // (visszaadja a 2-t és utána növeli)
    printf("%c",42);
    printf("%d\n",(char)42);
    printf("adj meg 1 számot");

    /*
    int input_szam;
    scanf("%d",&input_szam);
    printf("%d ; %p\n",input_szam,input_szam);
    //segfault-oprendszer
    //bus error -cpu
    int aaa;
    scanf("%d",&aaa);
    printf("SZÖKŐÉV\n");
    */
    int szokoev=2004;
    /*
    printf("adj meg egy számot");
    scanf("%d",&szokoev);
     */
    printf("\n");
    printf("%d\n",szokoev%4==0 && szokoev%100!=0 || szokoev%400==0);


    printf("GYAK4\n");
    //gyak4
    int arr[5];
    //alt: int arr[]={1,2,3,4,5};
    for(int i=0;i<5;++i){
        arr[i]=i*2;
        printf("a[%d]: %d\n",i,arr[i]);
    }
    printf("arr size: %lu\n",sizeof(arr)/sizeof(arr[0]));
    printf("arr[0]: %lu\n",sizeof(arr[0]));
    fuggv(arr);


    //feladatok
    int arr1[3]={0,0,0};
    int arr2[6]={1,2,3,4,5,6};
    int sum=0;
    for (int i = 0; i <sizeof(arr2)/sizeof(arr2[0]); ++i) {
        sum+=arr2[i];
    }
    printf("arr2 sum: %d\n",sum);
    int arr3[]={1,2,3,4,5};
    int max=arr3[0];
    for (int i = 0; i <sizeof(arr3)/sizeof(arr3[0]); ++i) {
        if(arr3[i]>max){
            max=arr[i];
        }
    }
    printf("arr3 max: %d\n",max);

    return 0;
}
