#include <iostream>

using namespace std;
    float descuento = 15;
    float p_precio;
    float resultado;
    float descuento2;
int main(){
    
    
    cout<<"Introduce el valor del producto que quieres comprar para aplicar un descuento del 15%: ";
    cin>>p_precio;
    
    cout<<"El precio que usted digito es: "<<p_precio<<endl;
    
    
    
    descuento2 = 15 * p_precio / 100;
    resultado = p_precio-descuento2;
    
    
    cout<<"El precio final del producto con descuento es de: "<<resultado;
    
    return 0;
    
}