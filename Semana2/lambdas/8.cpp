#include <iostream>
using namespace std;
/*8. Ingresar dos números para luego realizar 
la suma de estos y
 poder verificar si el número es
múltiplo de 3, por ejemplo 34 + 56 = 90, 90 
es múltiplo de 3.*/
template <typename T>
void Verificar(T x, T y){
    auto lam = [x,y](){
        if((x+y)%3==0){
            cout<<"La suma de los numeros es_: "<<x+y<<". La suma es divisible por 3. ";
        }else{
            cout<<"La suma de los numeros es_: "<<x+y<<". La suma no es divisible por 3. ";
        }
    };
    cout<<"Los numeros ingresados con_: "<<x<<","<<y<<endl;
    lam();
}
int main(){
    int num1,num2;
    cout<<"Ingresa 2 numeros_: "<<endl;
    cin>>num1>>num2;
    Verificar<int>(num1,num2);
    return 0;
}