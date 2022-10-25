#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));
    int * a = malloc(sizeof (int));
    int * b = calloc(5,sizeof (int));
    for (int i = 0; i < 5; ++i) {
        b[i]=rand();
    }
    printf("b (%p) before realloc: \n",b);
    for (int i = 0; i < 5; ++i) {
        printf("b [%d] %d \n", i, b[i]);
    }
    int * tmp = realloc(b, sizeof (int)*10);
    //nem kiterjeszti hanem újra foglal és nerm veszti el a már meglévő lefoglalt helyet
    //úgy hagyja a b-t ahogy volt
    if(tmp!=0){
        b=tmp;
    } else{
        printf("a memoria reallokacio sikertelen");
    }
    printf("b (%p) after realloc: \n",b);
    for (int i = 0; i < 10; ++i){
        printf("b[%d] %d\n",i,b[i]);
    }
    free(a);
    free(b);
    //rand() -random szamot general 0- MAX INT kozot
    // rand() % range+ starting value

    //önálló feladat
    //írj egy kitalálós játékot amely generál egy random számot
    // majd addig keri be a felhasznalotol a szamot amig el nem talalja
    //minden tipp utan ird ki,
    //Hogy az adott szam kisebb nagyobb vagy egyenki a kitelalalndo szammal
    //oldd meg a feladatot if else nélkül


    int random = rand()%10+1;
    int input;
    while(input!=random){
        printf("Tippelj öcskös!\n");
        scanf("%d", &input);
        char *x = "";
        x = random > input ? "NEM TALÁLTAD EL :sadfaceemoji:, az adott szám nagyobb\n" : x ;
        x = random < input ? "NEM TALÁLTAD EL :sadfaceemoji:, az adott szám kisebb\n" : x;

        printf("a tipp %s mint a kitalalando szam.", (input>random)? "kisebb":"nagyobb");
        printf(x);
        if(input==random){
            printf(" ELTALÁLTAD WOW, egyenlőek\n");
            break;
        }
        printf("random szám: %d \n",random);
    }
    printf("random szám: %d \n",random);

}
