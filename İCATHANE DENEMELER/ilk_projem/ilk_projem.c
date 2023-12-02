#include <unistd.h> 
#include <stdio.h>
 
int main()
{
    int i = 5; //%d,%i //integer tam sayılar için kullanılır

    float f = 3.14; //%f //float ondalıklı sayılar için kullanılır

    double d = 3.14234555432; //%lf //double ondalıklı sayılar için kullanılır

    char c = 'A'; //%c //char karakterler için kullanılır

    char *str = "Merhaba Dünya"; // %s //char *stringler için kullanılır
    char str2[15] = "Merhaba Dünya";// %s //char *stringler için kullanılır

    printf("i = %d\n", i);
    printf("f = %f\n", f);
    printf("d = %lf\n", d);
    printf("c = %c\n", c);
    printf("str = %s\n", str2); 

   
    return 0;
}