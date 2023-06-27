#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
    char nombres[6][50] = {{"Cargadores"}, {"Auriculares"}, {"Fundas"}, {"Soportes"}};
    char descripcion[6][100] = {{"Cargadores compactos y eficientes"}, {"Auriculares comodos con sonido claro"}, {"Fundas delgadas y funcionales"}, {"Soportes compactos y ajustables"}};
    int precio[6] = {6, 8, 5, 7};
    int a = menuprincipal();
    opciones(a);
    return 0;
}
