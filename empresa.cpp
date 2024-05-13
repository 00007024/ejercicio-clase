#include <iostream>
using namespace std;
int main()
{
    //declaramos variables
    float horas = 0;
    float horas_b, horas_e, salario_neto,impuestos,salario_liquido;
    string nombre;
    
    //datos de entrada:
    cout << "ingrese nombre";
    cin >> nombre;
    cout << "ingrese horas trabajadas en el mes:";
    cin >> horas;

    // Calculo de salario neto, sin impuestos
    if (horas<=160 && horas >0)
    {
        horas_b = horas;
        horas_e = 0;
    }
    else 
    {
        horas_b =160;
        horas_e =-160;
    }
    salario_neto = horas_b *10 *1.5;
    if (salario_neto <=200)
    {
        impuestos=salario_neto *0;
    }
    else if (salario_neto>200 && salario_neto<200)
    {
        impuestos *0,3;
    }
    //salidas
    cout << "hola ,"<<nombre << "su dato de salida son: \n";
    cout << "\tsalario_neto:\t\t" << salario_neto
    cout << "\timpuestos:\t\t" << impuestos;
    
    return 0;
    
}