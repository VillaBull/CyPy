#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float descuento;
    float monto;
    int opciones;
    int n;

    do
    {
        printf("Hola, Bienvenido, a continuacion se te presentar� un menu para que puedas seleccionar la opcion que necesites \n\n");
        printf("1. Ver Descuentos \n\n");
        printf("2. Ingresa monto y calcula descuento \n\n");
        printf("3. Mostrar precio con descuento \n\n");
        printf("4. Salir \n\n");
        printf("Elija una opci�n: \n\n");
        scanf("%i", &opciones);

        switch (opciones)
        {
            case 1:
                printf("Si el monto es menor que Q 500.00 no hay descuento.\n\n");
                printf("Si el monto est� comprendido entre 500 y 1000;  el 7 de descuento \n\n");
                printf("Si el monto est� comprendido entre  1000 y 7000;  9 de descuento \n\n");
                printf("Si el monto est� comprendido entre 7000 y 15000, 12 de descuento \n\n");
                printf("Si el monto es mayor que 15,000;  15% de descuento \n\n");
                break;

            case 2:
                printf("ingrese monto de la compra: ");
                scanf("%f", &monto);

                if (monto < 500)
                {
                    printf("NO HAY DESCUENTO");
                }
                else
                {
                    if (monto > 500)
                    {
                        descuento = (monto * 0.07);
                        printf(" el descuento a aplicar es de : ");
                        scanf("%f", &descuento);
                    }
                    else
                    {
                        if (monto > 1000)
                        {
                            descuento = (monto * 0.09);
                            printf("el descuento a aplicar es de : ");
                            scanf("%f", &descuento);
                        }

                        else
                        {
                            if (monto > 7000)
                            {
                                descuento = (monto * 0.12);
                                printf("el descuento a aplicar es de : ");
                                scanf("%f", &descuento);
                            }
                            else
                            {
                                if (monto > 15000)
                                {
                                    descuento = (monto * 0.15);
                                    printf("el descuento a aplicar es de : ");
                                    scanf("%f", &descuento);
                                }
                                else
                                {
                                    printf("Valor inexistente");
                                }
                            }
                        }
                    }
                }    
            case 3:
                printf("ingrese precio: ");
                scanf("%f", &monto);

                if (monto < 500)
                {
                    printf("NO HAY DESCUENTO");
                }
                else
                {
                    if (monto > 500)
                    {
                        descuento = (-(monto * 0.07) + monto);
                        printf("el total es de : ");
                        scanf("%f", &descuento);
                    }
                    else
                    {
                        if (monto > 1000)
                        {
                            descuento = (-(monto * 0.09) + monto);
                            printf("el total es de : ");
                            scanf("%f", &descuento);
                        }
                        else
                        {
                            if (monto > 7000)
                            {
                                descuento = (-(monto * 0.12) + monto);
                                printf("el total es de : ");
                                scanf("%f", &descuento);
                            }
                            else
                            {
                                if (monto > 15000)
                                {
                                    descuento = (-(monto * 0.15) + monto);;
                                    printf("el total es de : ");
                                    scanf("%f", &descuento);
                                }
                                else
                                {
                                    printf("Valor inexistente");
                                }

                            }
                        }
                    }
                }
            }
        }

    }
    while(opciones != 4);

    return 0;
}
