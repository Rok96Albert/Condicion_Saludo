#include <stdio.h>

void Tiempo(int hora,int minuto);

int main() {
    printf("¿Que hora tienes?\n");
    int hrs;
    printf("Hora:");
    scanf("%i",&hrs);
    int min;
    printf("Minutos:");
    scanf("%i",&min);
    printf("La hora es %i:%i\n",hrs,min);
    Tiempo(hrs,min);
    return 0;
}

void Tiempo(int h,int min)
{

    if(h >= 0 && min == 00 || h<= 11 && min <= 59)
    {
        printf("Buenos Dias");
    }
    else if(h >= 12 && min == 00 || h <= 17 && min <= 59)
    {
        printf("Buenas Tardes");
    }
    else if(h >= 18 && min == 00 || h <= 23 && min <= 59)
    {
        printf("Buenas Noches");
    }
    else
    {
        printf("La hora que introdujo no es valida");
    }
}