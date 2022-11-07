#include <stdio.h>
#include <string.h>

int main() {
    char a []= "alma";//{"a","l","m","a"};
    char* aa = "alma";//read only, ezért dob hibát
    a[2]='b';
    aa[2]='b';
    printf("a[]: %s\n aa: %s\n", a, aa);
    return 0;
    
}
