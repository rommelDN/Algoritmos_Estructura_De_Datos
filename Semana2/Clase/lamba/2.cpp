#include <iostream>
#include <functional>
using namespace std;
typedef function<int(int, int)> ff;

int main()
{
    auto f1 = [](int x, int y)
    { return x + y; };
    cout << f1(8, 6);

    auto f2 = [](float x, float y, float z)
    { return x - y - z; };
    cout << f2(2.5, 3.4, 2.1);

    auto f3 = [](int x, int y)
    { return x ^ y; };
    cout << f3(2, 4);

    function<int(int, int)> f4 = [](int x, int y)
    { return x + y; };
    cout << f4(5, 6);

    ff f5 = [](int x, int y)
    { return x + y; };
    cout << f5(5, 6);

    int duplicar = [](int x)
    {
        return [](int y)
        {
            return y * 2;
        }(x) * 2;
    }(3);
    cout << "Duplicar: " << duplicar;

    auto mayor = [](int x, int y)
    { return x > y ? x : y; };
    cout << mayor(8, 18);
    return 0;
}