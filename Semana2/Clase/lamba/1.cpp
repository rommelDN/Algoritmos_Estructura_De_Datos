// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template<typename T>
void calcular_v(T valor){
  auto lam =[](T val){return val*2;};
  cout<<lam(valor);
};
template<typename T>
T calcular_t(T valor){
  auto lam =[](T val){return val*4;};
  return lam(valor);
};

int main() {
  int num;
  cout<<"Ingresa numero: ";
  cin>>num;
  cout<<"Con void: ";calcular_v<float>(num);
  cout<<"Con retorno: "<<calcular_t<float>(num);
   
  auto lam1=[](int val){return val%2==0;};
  return 0;
}