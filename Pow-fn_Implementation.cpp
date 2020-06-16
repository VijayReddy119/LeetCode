#include <iostream>
#include<climits>
#include <cmath>
using namespace std;

double myPow(double x, int n) {
    if(n==0)
    	return 1;
    else if(n==1)
    	return x;
    else if(n<0)
    {
    	if(n==INT_MIN)
    	{
    		n=INT_MAX;
    		return x/(myPow(x,n));  
    	}
        else 
        {  
        	n = n*-1;
            return 1/myPow(x,n);
        }
    }
    int t = n/2;
    double temp = myPow(x,t);
    if(n%2==0)
    	return temp*temp;
    else 
    	return x*temp*temp;
}

int main(){

	double x =2.00000;
	int n = -2147483648;

	//cout<< pow(x, n);

	cout<<myPow(x,n);

    return 0;

}