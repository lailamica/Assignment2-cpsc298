#include <iostream> 
#include <string>

using namespace std; 

string getUserString() //takes in user
{
	string userString; 
	cin >> userString;

	for(int i = 0; i < userString.size(); i++) //changes whole string to lowercase
	{
		userString.at(i) = tolower(userString.at(i));
	}
	
	return userString;
};

double imperialToMetric(double userMeasurement)
{
	double measurement;

	measurement = userMeasurement / 12.0; // inches to feet
	measurement = measurement * 0.3048; // feet to meters	

	if (measurement < 0.3048) //checks to see if its less than 1 foot
	{
		measurement = measurement * 100; // meters to centimeters
	}		

	return measurement;
};

void printMetric(double measurement) //prints out a centimeter measurement 
{
	cout << measurement;
};

int main(int argc, char **argv)
{ 
	string userInput;
	string userInput2;
	double feet;
	double inches;

	cout << "Enter length in feet and inches" << endl;
	userInput = getUserString(); //length in feet

	while(userInput != "exit")
	{
		userInput2 = getUserString(); //length in inches
		feet = stod(userInput) * 12; //converts feet to inches and string to double
		inches = stod(userInput2); //converts string to double

		printMetric(imperialToMetric(feet)); //turns feet to meters and prints it out
		cout << " meters ";
		printMetric(imperialToMetric(inches)); //turns inches to centimeters and prints
		cout << " centimeters" << endl;
		
		userInput = getUserString(); //see if they wanna exit before starting again
	}

	return 0;
}