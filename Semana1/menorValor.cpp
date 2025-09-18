#include <iostream>
using namespace std;
template<typename T>
T menor(T a, T b, T c){
    int minValor = a;
    if(b<minValor){
        minValor=b;
    }if(c<minValor){
        minValor=c;
    }
    return minValor;
};
int main()
{
    double x,y,z;
    cout<<"\nIngrese 3 valor:\n";
    cin>>x>>y>>z;
    cout<<"\n Menor valor ingresado es: "<<menor<int>(x,y,z);
    return 0;
}
