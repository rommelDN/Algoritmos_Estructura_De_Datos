#include<iostream>
using namespace std;
int primo(int num, int x) {//(7,1)...(7,2)....
if (x == num)return 1; //1==7 -> NO
else {
if (num % x == 0)return 1 + primo(num, x + 1); //7%1 ->Si
// return 1+Primo(7,2)==0->NO...7%3->NO...
else return 0 + primo(num, x + 1); //0+Primo(7%3)..

}
}
int main() {
int num, x = 1, res;
cout << "\nIngresar numero: ";
cin >> num;
res = primo(num, x); // Primo(7,1)
if (res == 2)cout << "Primo";
else cout << "NO es primo";
return 0;
}