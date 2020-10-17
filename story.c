#include <stdlib.h>
#include <stdio.h>

void phrase4(void) {
    printf("Je vais aller manger un gouter.\n");
}

void phrase3(void)
{
    printf("et la Tempête l'emporta\n");
}

void phrase2(void)
{
    printf("La fourmi allait faire un long voyage semé d'embûches à travers la tempête \n");
    return;
}

int main(void)
{
    printf("Les fourmis sont belles\n");
    phrase2();
    phrase3();
    phrase4();
	puts("- Baudelaire");
    return 0;
}
