
#include <iostream>
using namespace std;

int main()
{
	char op, again;
	;
	for (int i = 0; again == 'Y' || again =='y'; i++) {
		double num1, num2;
	cout << "Enter the first number : ";
	cin >> num1;
	cout << endl;

	cout << "Enter the Operrator (+, -, *, / ) :";
	cin >> op;
	cout << endl;

	cout << "Enter the second number : ";
	cin >> num2;
	cout << endl;

	switch (op) {
	case '+':
		cout << num1 << " + " << num2 << " = " << (num1 + num2);
		break;

	case '-':
		cout << num1 << " - " << num2 << " = " << (num1 - num2);
		break;

	case '*':
		cout << num1 << " * " << num2 << " = " << (num1 * num2);
		break; 

	case '/':
		if (num2 != 0.0)
		{
			cout << num1 << " / " << num2 << " = " << (num1 / num2);
		}
		else
			cout << "Divide by Zero situation";
		break;
	default :
		cout << op << " is an invalid operator";
	}
	}
	cout << "If u want to continu pres Y or y ";
	cin >> again;
	  

}


