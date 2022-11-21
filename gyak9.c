#include <stdio.h>
#include <stdlib.h>


int fibonacci(){
    static int counter = 0;
    counter++;
    if (counter == 1){
        return 0;
    } else if (counter == 2){
        return 1;
    } else {
        return fibonacci(counter-1) + fibonacci(counter-2);
    }
}
int main(){
    printf("%d\n",fibonacci());
    printf("%d\n",fibonacci());
    printf("%d\n",fibonacci());
    printf("%d\n",fibonacci());
    return 0;
}
