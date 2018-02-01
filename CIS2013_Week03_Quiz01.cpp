#include <iostream>
using namespace std;

int main (){
	
	int first_number = 0;
	int second_number = 0;
	int result = 0;
	char operation;
	bool invalid_entry = true;
	
	cout << "type your first number: ";
	cin >> first_number;
	cout << "\n" << "type your second number: ";
	cin >> second_number;
	while (invalid_entry=false){
	cout << "\n" << "would you like to add or multiply? choose + or *: ";
	cin >> operation;
	if ((operation !='*') or (operation !='+')){
	cout << "invalid operation. Please choose + or *.";}
	else {invalid_entry=false;}}
	if (operation=='+'){result=first_number+second_number;}
	if (operation=='*'){result=first_number*second_number;}
	cout << result;
	
	return 0;
}
	