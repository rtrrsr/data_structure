#include <stdio.h>

int main(void) {
    int *p;     //p是个变量名字，int * 表示该p变量只能存储int类型变量的地址
    int i = 10, j;
    //*p = i;
    p = &i;
    *p = 20;
    printf("*p = %d\ni = %d\nj = %d\n", *p, i, j);
}