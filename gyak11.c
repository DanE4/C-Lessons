#include <stdio.h>

struct point{
    int x;
    int y;
};
//create enum in C
enum color{
    red,
    green,
    blue
};
//create union in C
union data{
    int i;
    float f;
    char str[20];
};

typedef struct {
    int x;
    int y;
} a;
int main() {
    a valami;
    return 0;
}
