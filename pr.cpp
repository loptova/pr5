#include <iostream>
using namespace std;

extern "C" int testf(int a, int b, int d);

int main()
{
        int x,y,z;
        cin >> x >> y >> z;
        cout << "C++: " << (3*x+z*y)%4 << endl << "ASM: " << testf(x,y,z) << endl;
        return 0;
}
   