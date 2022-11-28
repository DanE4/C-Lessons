#include <stdio.h>

struct point{
    int x;
    int y;
};
enum color{
    red,
    green,
    blue
};
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
