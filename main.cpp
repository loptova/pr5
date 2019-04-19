#include <iostream>
using namespace std;

extern "C" int sum(int a, int b, int d);

int main()
{
        int x,y,z;
        cout << " Введите x,y,z :";
        cin >> x >> y >> z;
        cout << (3-x%5)/(y+2*z) << sum(x,y,z) << endl;
        return 0;
}
    