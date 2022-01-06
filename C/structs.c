#include <stdio.h>

typedef struct s_point
{
    int x;
    int y;
} t_point;

int main()
{

    t_point pointOne;
    pointOne.x = 10;
    pointOne.y = 50;

    printf("%d %d\n", pointOne.x, pointOne.y);

    return 0;
}