# include <stdio.h>
/* Máximo común divisor.
El programa, al recibir como datos dos números enteros, calcula el máximo
➥ común divisor de dichos números. */
int mcd(int, int);
void main(void)
{
int NU1, NU2, RES;
printf("\nIngresa los dos números enteros: ");
scanf("%d %d", &NU1, &NU2);
RES = mcd (NU1, NU2);
printf("\nEl máximo común divisor de %d y %d es: %d", NU1, NU2, RES);
}
int mcd(int N1, int N2)
/* Esta función calcula el máximo común divisor de los números N1 y N2. */
{
int I;
if (N1 < N2)
I = N1 / 2;
  }