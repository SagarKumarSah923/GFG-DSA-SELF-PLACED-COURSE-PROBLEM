//Eucliden Algorithm
#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a; 
	}

	return a;
}

int main() {
    
    	int a = 12, b = 15;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}

//Optimized Eucliden Algorithm
#include <iostream>
#include <limits.h>
using namespace std;

 int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int main() {
    
    	int a = 12, b = 15;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}
