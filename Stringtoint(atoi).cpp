#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

	//string str = "42"; // ----(42)
	//string str = "-42"; //-----(-42)
	//string str = "      -42"; //---- (-42)
	//string str = "4193 with words"; //---- (4193)
	//string str = "words and 987"; //---- (0)
	//string str = "-91283472332"; //---- (INT_MIN)

	int i = 0, n = str.size();
        while (i < n && str[i] == ' ')
            i++;
        if (i >= n)
            return 0;
        int sign = 1;
        if (str[i] == '+')
            i++;
        else if (str[i] == '-') {
            sign = -1;
            i++;
        }
        if (i >= n || !isdigit(str[i]))
            return 0;
        long res = 0;
        while (i < n && isdigit(str[i])) {
            res = res * 10 + str[i++] - '0';
            if (res * sign > INT_MAX)
                return INT_MAX;
            else if (res * sign < INT_MIN)
                return INT_MIN;
        }
        return (int)(res * sign);
}