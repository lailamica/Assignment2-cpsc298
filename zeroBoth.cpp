#include <iostream> 

using namespace std; 

//passes the variables by reference so they'll be changed in the main space
void zeroBoth(int& num1, int& num2) 
{
	//sets both numbers to 0
	num1 = 0;
	num2 = 0;
};

int main(int argc, char **argv)
{ 
	int userVal1;
	int userVal2;
	
	cout << "Enter two numbers" << endl;
	cin >> userVal1;
	cin >> userVal2;

	//outputs variables before and after they've been zeroed
	cout << "Entered numbers: " << userVal1 << " " << userVal2 << endl;
	zeroBoth(userVal1, userVal2);
	cout << "Zeroed numbers: " << userVal1 << " " << userVal2 << endl;
	
	return 0;
}