#include <iostream>

using namespace std;

    int Num1;
    int Num2;
    int Elec;
    double Resultado;
    

int main()
{
    
    cout<<"\nElija el numero del procedimiento que quiere realizar";
    cout<<"\n1. Suma";
    cout<<"\n2. Resta"; 
    cout<<"\n3. Multiplicacion";
    cout<<"\n4. Division";
    cout<<"\n5. Porcentaje"<<endl;
    cout<<"Ingrese el numero de la operacion que desea realizar: ";
    cin>>Elec;
    
    if(Elec == 5){
        
        cout<<"Escriba el numero :";
        cin>>Num1;
        cout<<"Escriba el porcentaje que quiere saber: ";
        cin>>Num2;
        
        Resultado = (Num2 * Num1 / 100);
        
        cout<<"El resultado es: "<<Resultado;
        
        return 0;
    }
    
    
    cout<<"\nEscribe dos numeros para realizar el procedimiento matematico que requieras"<<endl;
    cout<<"Numero 1: ";
    cin>>Num1;
    
    cout<<"Numero 2: ";
    cin>>Num2;
    
    
    if(Elec == 1){
        Resultado = Num1 + Num2;
        
    }
        else if(Elec == 2){
            Resultado = Num1 - Num2;
            
        }
            else if (Elec ==3){
                Resultado = Num1 * Num2;
            }
                else if (Elec ==4){
                    Resultado = Num1 / Num2;
                }
        cout<<"El resultado es: "<<Resultado;
        
                   
    return 0;
    
}