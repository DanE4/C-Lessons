#include <stdio.h>
//visibility
//0-ra inicializálódik az értékük, global scope
//shadowing, változó újra inicializálása, pl. lejjebbi scopeban újra létre lehet hozni a már meglévőt
int a[1000];
void print_calls(){
  static int called=0;
  printf("%d\n",++called);
}

void swap(int* c, int* d){
    int tmp = *c;
    *c=*d;
    *d= tmp;
    
}

void func();

int* compare(int* p1,int* p2){
    return *p1>*p2 ? p1 : p2;
}
int main() {
    int a=2;
    int b=5;
    /*
    printf("%d\n",a);
    int b[1000];
    for (int i = 0; i <1000; ++i) {
        printf("%d %d\n",a[i],b[i]);
    }
     */
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    print_calls();
    print_calls();
    func();
  
    int p1=5;
    int p2=2;
    printf("%d",*compare(&p1,&p2));
  
    return 0;
}

void func(){
  printf("LOL ITS A FUNCTION\n");
}
