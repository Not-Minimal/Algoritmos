//Calculo de Sueldo con horasn ordinarias, etc.
#include<stdio.h>

int sueldoSemanal, horasTrabajadas, HorasExtras, TotalHoraExtra, valorHora, totalHorasTrabajadas;

int main(int argc, char const *argv[])
{
    printf("Ingrese el valor de hora Normal: ");
    scanf("%d", &valorHora);
    printf("Ingrese horas trabajadas en la semana: ");
    scanf("%d", &horasTrabajadas);
    if (horasTrabajadas > 45 && horasTrabajadas <= 120)
    {
        HorasExtras = (horasTrabajadas - 45);
        TotalHoraExtra = (HorasExtras*(2*valorHora));
        printf("El total de las horas extraordinarias trabajadas es: = %d", TotalHoraExtra);
        printf("\n");
        totalHorasTrabajadas = (45*valorHora);
        printf("El valor de las horas ordinarias es: = %d", totalHorasTrabajadas);
        printf("\n");
        sueldoSemanal = (TotalHoraExtra+totalHorasTrabajadas);
        printf("El sueldo semanal del trabajador es igual a: = %d", sueldoSemanal);
        printf("\n");
    }
    else if (horasTrabajadas >= 0 && horasTrabajadas <= 45)
    {
        sueldoSemanal = (horasTrabajadas*valorHora);
        printf("El sueldo semanal es de: = %d", sueldoSemanal);
        printf("\n");
    } 
    else if (horasTrabajadas < 0 || horasTrabajadas > 121)
    {
        printf("Las horas trabajadas deben ser mayor a 0 y menor a 121");
        printf("\n");
    }
    return 0;
}
