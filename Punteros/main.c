#include <stdio.h>

int main()
{
	int* puntero1 = NULL;
    int variable_entera = 999;
    char* puntero2 = &variable_entera;
    
    printf("El valor de la variable_entera es: %d\n",variable_entera);
    printf("La dirección de memoria donde est almacenada la variable_entera es: %p\n",&variable_entera);
    
    printf("La direccion del puntero es: %p\n",&puntero1);
    printf("El valor del puntero es: %p\n",puntero1);
    
    puntero1 = &variable_entera;
    
    printf("La direccion del puntero es: %p\n",&puntero1);
    printf("El valor del puntero es: %p\n",puntero1);
    
    printf("El valor al que se accede usando la dirección que existe en puntero1 es: %d\n",*puntero1);
    
    variable_entera = 980;
    
    printf("El valor de la variable_entera es: %d\n",variable_entera);
    printf("El valor al que se accede usando la dirección que existe en puntero1 es: %d\n",*puntero1);
    
    printf("El valor al que se accede usando la dirección que existe en puntero1 es: %c\n",*puntero2);
}
