#include <iostream>
#include <string>
using namespace std;
int main()
{
	// make a variable, an indentifier, and initialize it
	int bruh = 15, bruh1 = 5;
	// make a constant variable, an indentifier, and initilize it
	const double bruh2 = 10;
	// make an indentifier with integer initilizer
	double bruh3 = 15.5;
	// create a string text variable 
	string start;
	// create a variable with an arithmetic operator 
	int bruh4 = 5 + 10;
	// use type casting to drop the decimal drom an operand 
	static_cast <double> (bruh3);
	// try a compound assignment statement
	bruh1 *= 3;
	// do something with cin
	
	// use an increment operator 
	int bruh5= 14;
	bruh5++;
	// use a decrement operator 
	int bruh6 = 16;
	bruh6--;
	// use a prompt line 

	cout << "were going to do an exrcsie with the number 15!!!";
	cout << "\n to start please type \"start\".";
	cin >> start;
	cout << "\n \t Great!";
	cout << " \n now please type in the number" << bruh;
	cin >> bruh;
	cout << "\n \t Great!";
	cout << "\n lets do some addition!!";
	cout << "\n what is 14+1??";
	cin >> bruh5;
	cout << "\n \t Great!";
	cout << "\n now whats 16-1??";
	cin >> bruh6;
	cout << "\n \t Great!";
	cout << "\n next up is multiplication!!";
	cout << "\n what is 5*3??";
	cin >> bruh1;
	cout << "\n \t Great!";
	cout << "\n lets move on to some decimals!!";
	cout << "\n whats 15.5-.5??";
	cin >> bruh3;
	cout << "\n \t Great!";

	return 0;
}