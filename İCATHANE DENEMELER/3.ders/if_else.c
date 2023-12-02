#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;

    if (a > b)
    {
        printf("a, b'den buyuktur.\n");
    }
    else
    {
        printf("a, b'den kucuktur.\n");
    }

    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    if (a > b)
    {
        printf("a, b'den buyuktur.\n");
    }
    else if (a < b)
    {
        printf("a, b'den kucuktur.\n");
    }
    else
    {
        printf("a, b'ye esittir.\n");
    }

    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    if(a > b)
    {
        printf("a, b'den buyuktur.\n");
    }
    if(a < b)
    {
        printf("a, b'den kucuktur.\n");
    }
    if(a == b)
    {
        printf("a, b'ye esittir.\n");
    }

    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    if(a > b)
    {
        printf("a, b'den buyuktur.\n");
    }
    else
    {
        if(a < b)
        {
            printf("a, b'den kucuktur.\n");
        }
        else
        {
            printf("a, b'ye esittir.\n");
        }
    }

    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    if(a > b && a == 5)
    {
        printf("a, b'den buyuktur ve a 5'e esittir.\n");
    }
    else if(a < b || a == 5)
    {
        printf("a, b'den kucuktur veya a 5'e esittir.\n");
    }
    else if(!(a > b))
    {
        printf("a, b'den kucuk degildir.\n");
    }
    else
    {
        printf("a, b'ye esittir.\n");
    }

    
    return 0;
}

int main()
{
    int a = 5;
    int b = 10;

    if(!(a > b) && a == 5)
    {
        printf("a, b'den buyuktur ve a 5'e esittir.\n");
    }
    else if(a < b || a == 5)
    {
        printf("a, b'den kucuktur veya a 5'e esittir.\n");
    }
    else if(!(a > b))
    {
        printf("a, b'den kucuk degildir.\n");
    }
    else
    {
        printf("a, b'ye esittir.\n");
    }


    return 0;
}

int main()
{
    (5 > 10) ? printf("5, 10'dan buyuktur.\n") : printf("5, 10'dan kucuktur.\n");
}