#include <iostream>
#include <format>
#include <cmath>
#include <numbers>

using namespace std;

int main() {

	//attempt with Unicode
	//wchar_t pi_t { L'π' };
	//wchar_t phi_t { L'φ' };

	//without Unicode
	char p1{ 'P' }, p2{'i'};
	char phi1{ 'P' }, phi2{ 'h' }, phi3{ 'i' };

	double pi{ numbers::pi };
	double phi{ numbers::phi };
	double logarithm{ numbers::e };
	double sqrt_1{ sqrt(2) };
	double sin_pi_4{ sin(numbers::pi / 4) };

	string log_s{ "The base of natural logarithm" };
	string sqrt_s{ "Square root of 2" };
	string description{ "Description" };
	string aproximate{ "Aproximate Value" };
	string lines{ "_____________________________________________________" };
	string sin{ "Sin(pi/4)" };
	
	cout << format("{}\n", lines);
	cout << format("{:<37}{}\n", description, aproximate);
	cout << format("{}\n", lines);
	cout << format("{:<37}{:.4f}\n", log_s, logarithm);
	cout << format("{}{:<36}{:.4f}\n",p1,p2, pi);
	cout << format("{}{}{:<35}{:.4f}\n",phi1, phi2, phi3, phi);
	cout << format("{:<37}{:.4f}\n",sqrt_s , sqrt_1);
	cout << format("{:<37}{:.5E}\n",sin, sin_pi_4);
	return 0;
}
