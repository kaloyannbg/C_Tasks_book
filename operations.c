#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zad3() {
    int x = 13 / 2;
    printf("13 / 2 = %d", x);
}

int zad5() {
    int x = 121 % 21;
    char c = '%';
    printf("121 %c 2 = %d", c, x);
}

int test() {

   int x,y;
    x = 10;
    y = 0;
    (x < 0) && (y = --x + 1);
    printf("y = %d\n", y);


}

int main()
{

zad3();;

zad5();

test();

}
