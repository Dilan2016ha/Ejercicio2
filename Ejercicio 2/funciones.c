#include <stdio.h>

void verproductos(char nombres[6][50], char descripcion[6][100], int precio[6], int cantidad)
{
    char res;
    printf("Los productos son los siguientes\n");
    printf("   Nombre                                    Descripcion                                       Precio\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("%d-%s                              %s                              $%d\n", i, nombres[i], descripcion[i], precio[i]);
    }
}
void ingresarproducto(char nombres[6][50], char descripcion[6][100], int precio[6], int cantidad)
{
    printf("Ingrese el nombre del producto que desea agrergar\n");
    scanf("%s", nombres[cantidad]);
    printf("Ingrese la descripcion del producto\n");
    scanf("%s", descripcion[cantidad]);
    printf("ingrese el precio del producto\n");
    scanf("%d", precio[cantidad]);
}
int menuprincipal()
{
    int a;
    printf("--Bienvenido a Accesorios Practicos--\n");
    printf("Elija una ipcion\n");
    printf("1- Ver productos\n");
    printf("2- Ingresar producto\n");
    printf("3- Modificar Producto\n");
    printf("4- Eliminar producto\n");
    scanf("%d", &a);
    return a;
}
void eliminarproducto(char nombres[6][50], char descripcion[6][100], int precio[6])
{
    int a;
    printf("Que producto desea eliminar?\n");
    scanf("%d", &a);
    nombres[a][50] = "eliminado";
    descripcion[a][100] = "Eliminado";
    precio[6] = 0;
}
void modificarproducto(char nombres[6][50], char descripcion[6][100], int precio[6])
{
    int b, c;
    printf("Que producto desea modificar?\n");
    scanf("%d", &b);
    printf("Que desea modificar?\n");
    printf("1- Nombre\n");
    printf("2- Descripcion\n");
    printf("3- Precio\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Ingrese el nuevo nombre:\n");
        scanf("%s", nombres[b]);
        break;
    case 2:
        printf("Ingrese la nueva descripcion:\n");
        scanf("%s", descripcion[b]);
        break;
    case 3:
        printf("Ingrese el nuevo precio:\n");
        scanf("%d", precio[b]);
        break;
    default:
        printf("Opcion no existente");
        break;
    }
}
void opciones(int a)
{
    char nombres[6][50] = {{"Cargadores"}, {"Auriculares"}, {"Fundas"}, {"Soportes"}};
    char descripcion[6][100] = {{"Cargadores compactos y eficientes"}, {"Auriculares comodos con sonido claro"}, {"Fundas delgadas y funcionales"}, {"Soportes compactos y ajustables"}};
    int precio[6] = {6, 8, 5, 7};
    char res;
    int cantidad = 4;
    do
    {
        switch (a)
        {
        case 1:
            verproductos(nombres, descripcion, precio, cantidad);
            printf("Desea volver al menu principal?\n");
            printf("Si(s)/No(n)\n");
            scanf("%c", &res);
            if (res == 's')
            {
                a = menuprincipal();
            }
            if (res == 'n')
            {
                printf("Gracias por utilizar nuestra tienda\n");
                a = 5;
            }
            break;
        case 2:
            cantidad = +1;
            ingresarproducto(nombres, descripcion, precio, cantidad);
            printf("Desea volver al menu principal?\n");
            printf("Si(s)/No(n)\n");
            scanf("%c", &res);
            if (res == 's')
            {
                a = menuprincipal();
            }
            if (res == 'n')
            {
                printf("Gracias por utilizar nuestra tienda\n");
                a = 5;
            }
            break;
        case 3:
            modificarproducto(nombres, descripcion, precio);
            printf("Desea volver al menu principal?\n");
            printf("Si(s)/No(n)\n");
            scanf("%c", &res);
            if (res == 's')
            {
                a = menuprincipal();
            }
            if (res == 'n')
            {
                printf("Gracias por utilizar nuestra tienda\n");
                a = 5;
            }
            break;
        case 4:
            cantidad = -1;
            eliminarproducto(nombres, descripcion, precio);
            printf("Desea volver al menu principal?\n");
            printf("Si(s)/No(n)\n");
            scanf("%c", &res);
            if (res == 's')
            {
                a = menuprincipal();
            }
            if (res == 'n')
            {
                printf("Gracias por utilizar nuestra tienda\n");
                a = 5;
            }
        default:
            printf("Opcion no valida\n");
            break;
        }
    } while (a != 5);
}