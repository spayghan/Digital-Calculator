//design calculator
#include<iostream>
using namespace std;

int main(){
	char op;
	int num1, num2;
	cout << "Enter the operator(+, -, *, /) : ";
	cin >> op;
	
	cout << "Enter two numbers one by one : ";
	cin >> num1 >> num2;
	
	switch(op){
	case '+':
		cout << num1 << "+" << num2 << "=" << (num1 + num2);
		break;
		
	case '-':
		cout << num1 << "-" << num2 << "=" << (num1 - num2);
		break;
	
	case '*':
		cout << num1 << "*" << num2 << "=" << (num1 * num2);
		break;
		
	case '/':
		if( num2 != 0)
		cout << num1 << "/" << num2 << "=" << (num1 / num2);
		else
		cout << "divided by zero situation";
	break;
	
	default:
		cout << op << "it is an invalid operator";
}
return 0;
}

