
print("Bienvenido")
print("a continuacion encontrara un menu")
print("Elija la opcion de su interes")

def menu():

    print("__________________________")
    print("1. Ver Lista de Descuentos")
    print("--------------------------")
    print("2. Ingresa Monto y mostrar")
    print("   el descuento que aplica")
    print("--------------------------")
    print("precio ya con el descuento")
    print("--------------------------")
    print("4. Salir del programa")
    print("--------------------------")

while True:
    menu()

    opcionmenu = input("ingresa una opcion: ")

    if opcionmenu == "1":
        print("Si el monto es menor que Q 500.00 no hay descuento.")
        print("Si el monto esta comprendido entre 500 y 1000;  el 7 de descuento")
        print("Si el monto esta comprendido entre  1000 y 7000;  9 de descuento")
        print("Si el monto esta comprendido entre 7000 y 15000, 12 de descuento")
        print("Si el monto es mayor que 15,000;  15 de descuento")

    elif opcionmenu == "2":
        monto = float(input("ingrese precio: "))

        if (monto<500):
            print("No hay descuento disponible")
        elif (monto>=500):
            descuento = monto * 0.07
            print("el descuento a aplicar sería: ", descuento)
        if (monto>=1000):
            descuento = monto * 0.09
            print("el descuento a aplicar sería: ", descuento)
            print("")
        if (monto>=7000):
            descuento = monto * 0.12
            print("El descuento a aplicar sería: ", descuento)
        if (monto>=15000):
            descuento = monto * 0.15
            print("El descuento a aplicar seria: ", descuento)
        elif (monto >= 20000):
            print("No hay descuentos")

    elif opcionmenu == "3":
        monto = float(input("ingrese precio: "))

        if (monto<500):
            print("No hay descuento disponible")
        elif (monto>500):
            descuento = (-(monto * 0.07)+monto)
            print("el descuento a aplicar sería: ", descuento)
        if (monto>1000):
            descuento = (-(monto * 0.09)+monto)
            print("el descuento a aplicar sería: ", descuento)
            print("")
        if (monto>7000):
            descuento = (-(monto * 0.12)+ monto)
            print("El descuento a aplicar sería: ", descuento)
        if (monto>15000):
            descuento = (-(monto * 0.15)+monto)
            print("El descuento a aplicar seria: ", descuento)
        elif (monto > 20000):
            print("No hay descuentos")
    elif opcionmenu == "4":
        break
    else:
        print("no has pulsado ninguna opción correcta")
        input("pulsa una tecla para continuar")
