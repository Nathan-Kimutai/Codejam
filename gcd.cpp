#include <bits/stdc++.h>
using namespace std;
//this are the two integers that are to be calculated 
int a,b;

int main()
{
	a = 12;
	b = 36;

	gcd(a,b);

}


int gcd(int a, int b)
{
	if (b==0)
		return a;
	return gcd(b,a % b);
}

int code()


