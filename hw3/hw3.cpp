/* Matthew DeBoer 
 * Rodrigo Sardinas
 * hw3.cpp g++
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main() 
{
	float loanAmount;
	float yearlyIntrestRate;
	float monthlyPayment;
	

	//get user inputs 
	cout << "Loan Amount : ";
	cin >> loanAmount;
	
	cout << "Yearly Intrest Rate : ";
	cin >> yearlyIntrestRate;

	cout << "Monthly Payment : ";
	cin >> monthlyPayment;

	float monthlyIntrestRate = yearlyIntrestRate/12;
	cout << monthlyIntrestRate << endl;

	//check if monthly payment is large enough 
	
	ef ((loanAmount * monthlyIntrestRate
