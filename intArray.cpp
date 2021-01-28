#include <iostream> 

using namespace std; 

int main(int argc, char **argv)
{ 
	int numberArray[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}; //sets aside memory space and intializes all values to a neg number
	int numElement = 0; //to count number of times in while loop
	int userElement;

	cout << "Enter up to 10 nonnegative integers" << endl;
	cin >> userElement;

	//will keep adding integers til it reaches 10 or a negative number 
	while(userElement >= 0) //confirms that the integers aren't negative
	{
		if (numElement > 9) //checks if reached array limit
			break;

		numberArray[numElement] = userElement; //adds the input into the array

		numElement += 1; //increments index of array
 
		cin >> userElement;
	}

	for(int i = 0; i < 10; i++) //outputs the contents of the array
	{
		if(numberArray[i] == -1) //if the value is equal to the intialized value of -1 will stop printing
			break;

		cout << "Array element " << i << ": " << numberArray[i] << endl;
	}
			
	return 0;
}