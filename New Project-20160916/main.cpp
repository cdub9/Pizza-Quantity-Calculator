/*
Coleman Warren, Section 8, coleman.warren@hotmail.com

Purpose:
Input:
Output:
Test Cases
Test Case 1
Input:
Output:
Test Case 2
Input:
Output:
Test Case 3
Input:
Output:
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Constants
const double PI = 3.14159;
const double LARGE_PIZZA_PRICE = 14.68;
const double MEDIUM_PIZZA_PRICE = 11.48;
const double SMALL_PIZZA_PRICE = 7.28;
const double LARGE_PIZZA_DIAMETER = 20;
const double MEDIUM_PIZZA_DIAMETER = 16;
const double SMALL_PIZZA_DIAMETER = 12;
const int GUESTS_PER_LARGE_PIZZA = 7;
const int GUESTS_PER_MEDIUM_PIZZA = 3;
const int GUESTS_PER_SMALL_PIZZA = 1;

int main() {
	//Determine the number of attending guests

	cout << "How many guests will be attending the event? " << endl;
	int number_of_guests;
	cin >> number_of_guests;

	//Compute the number of pizzas to order

	int large_pizzas_to_order = number_of_guests / GUESTS_PER_LARGE_PIZZA;
   	int medium_pizzas_to_order = (number_of_guests % GUESTS_PER_LARGE_PIZZA) / GUESTS_PER_MEDIUM_PIZZA;
 	int small_pizzas_to_order = number_of_guests - (large_pizzas_to_order * GUESTS_PER_LARGE_PIZZA + medium_pizzas_to_order * GUESTS_PER_MEDIUM_PIZZA);
    
    	cout << large_pizzas_to_order << endl;
    	cout << medium_pizzas_to_order;

	return 0;
}
