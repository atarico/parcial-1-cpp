#include <iostream>

using namespace std;

int ingresarNumero(){
    int numeroIngresado;
    cin >> numeroIngresado;

    return numeroIngresado;
}

void esBisiesto(){

    cout << "Imgrese un anio: ";
    int anio = ingresarNumero();

    if(anio %4 == 0 && anio %100 != 0 || anio %400 == 0){
        cout << anio << " Es un anio bisiesto";
    }else{
        cout << anio << " No es un anio bisiesto";
    }
}


void tablaDeMultiplicarInversa(){
    cout << "Ingrese un numero: ";
    int numero = ingresarNumero();

    cout << "Tabla de multiplicar de: " << numero << endl;
    for(int i = 10; i >= 1; i--){
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}


void fizzBuzz(){
    cout << "Imgrese un limite: ";
    int limite = ingresarNumero();

    for(int i = 1; i <= limite; i++){

        if(i % 3 == 0 && i % 5 == 0){

            cout << "FizzBuzz\n";

        }else if(i % 3 == 0){

            cout << "Fizz\n";

        }else if (i % 5 == 0){

            cout << "Buzz\n";
        }else {
            cout << i << endl;
        }
    }


}

int main(){

    int opcion;

    do{
        cout << "\n --- Menu ejercicios ---\n";
        cout << "1. Bisiesto??\n";
        cout << "2. Tabla de multiplicar inversa\n";
        cout << "3. FizzBuzz\n";
        cout << "4. Salir\n";

        cout << "Ingrese una opcion: "; cin >> opcion;

        switch(opcion){
            case 1:
                esBisiesto();

                break;
            case 2:

                tablaDeMultiplicarInversa();
                break;
            case 3:
                
                fizzBuzz();
                break;
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion no valida \n";
        }
    }while(opcion != 4);

    return 0;
}
