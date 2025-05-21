#include<stdio.h>
    float conversao(float celcius){
        float c;
        c=(celcius * 1.8)+32;
        return c;
    }

    int main ()
    {
        float f,c;
        printf("Digite o celcius! ");
        scanf("%f",&c);
        f=conversao(c);
        printf("%.2f",f);

        return 0;
    }
