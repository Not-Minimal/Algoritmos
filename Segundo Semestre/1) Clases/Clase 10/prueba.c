/*  Author: Alejandro */
/*  E-mail: farias_io@pm.me */

#include <stdio.h>

int longitud(int rut)
{
    int contador = 0;
    while (rut > 0)
    {
        rut = rut / 10;
        contador++;
    }
    return contador;
}

int calculoDigito(int rut)
{
    /* Variables locales */
    int largo = longitud(rut), val[largo], contador = 2, suma = 0, resta2, i, mod_f, resta;
    float mod;
    /* Fin variables locales */

    for (i = 0; i <= largo; i++)
    {
        val[i] = rut % 10 * contador;
        contador = contador + 1;
        if (contador == 8)
        {
            contador = 2;
        }
        rut = rut / 10;
    }

    for (i = 0; i < largo; i++)
    {
        suma = suma + val[i];
    }

    mod = suma / 11;      // Se obtiene el modulo
    mod_f = mod * 11;    // Se multiplica el modulo * 11
    resta = suma - mod_f; // Se resta la sumaatoria - el modulo
    resta2 = 11 - resta;    // Se resta 11 - la diferencia de la sumaatoria - el modulo
    return resta2;
}

int main(void)
{
    int rut, digito;
    printf("Calcular digito verificador RUT\n");
    printf("Ingrese el RUT sin digito: ");
    scanf("%d", &rut);
    digito = calculoDigito(rut);
    if (digito == 10)
    {
        printf("El digito verificador es: K\n");
        printf("El RUT completo es: %d-K\n", rut);
    }
    else
    {
        printf("El digito vertificador es: %d\n", digito);
        printf("El RUT completo es: %d-%d\n", rut, digito);
    }
    return 0;
}