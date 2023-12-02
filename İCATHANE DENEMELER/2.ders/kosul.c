#include <stdio.h>

int main(void)
{
    int boy = 180;

    float kilo = 70.5;

    char isim[] = "berat";

    char kont = 'k';

    if(kont == 'e')
    {
        printf("erkek\n");
    }
    else
        printf("kadin\n");
    printf("isim = %s\n",isim);
    printf("boyu = %d\n",boy);
    printf("kilo = %f\n",kilo);
    printf("kont = %c",kont);

    return  (0);
}