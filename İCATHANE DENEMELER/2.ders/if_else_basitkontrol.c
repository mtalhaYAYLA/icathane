#include <stdio.h>

int main(void)
{
    int deger1 = 5;
    int deger2 = 10;
    float sonuc = 0;
    char islem = '*';

    if(islem == '+')
    {
        sonuc = deger1 + deger2;
    }
    else if(islem == '-')
    {
        sonuc = deger1 - deger2;
    }
    else if(islem == '*')
    {
        sonuc = deger1 * deger2; 
    }
    else if(islem == '/')
    {
        sonuc = deger1 / deger2;
    }                                               
    else
    {
        printf("Hatali islem\n");
    }
    printf("sonuc = %f\n",sonuc);
}