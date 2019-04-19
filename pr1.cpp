#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{
	
	clock_t begin = clock();

	for (long long unsigned int g=0;g<10000000000;g++)
	{
	   float e = 0.000001;
	    float res = 0;
	    int f1 = 1, f2 = 1, f = f1;
	    int pow = 4;
	    int fac = 1;
	    int i=1;
	    float sum = 0;
	    do{
		f = f1;
		f1 = f2;
		f2 = f1 + f;
		pow = pow * 4;
		fac = fac * i;
		res = f/(pow * fac);
		sum += res;
		++i;
	    } while (res > e);
	}
	clock_t end = clock();
    cout << "time in milliseconds : " << (double)((double)(end-begin)/(CLOCKS_PER_SEC/1000)) << endl;
}
