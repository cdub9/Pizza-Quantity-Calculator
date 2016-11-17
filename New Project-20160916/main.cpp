/*
Coleman Warren
Purpose: To calculate the number of pizzas needed for various club events at BYU
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14159;
const double LARGE_PIZZA_PRICE = 14.68;
const double MEDIUM_PIZZA_PRICE = 11.48;
const double SMALL_PIZZA_PRICE = 7.28;
const int GUESTS_PER_LARGE_PIZZA = 7;
const int GUESTS_PER_MEDIUM_PIZZA = 3;
const int GUESTS_PER_SMALL_PIZZA = 1;

int main() {
	//Determine the number of attending guests
	cout << "How many guests will be attending the event? ";
	int number_of_guests;
	cin >> number_of_guests;

	//Compute the quantity and sizes of pizzas to order
	int large_pizzas_to_order = number_of_guests / GUESTS_PER_LARGE_PIZZA;
   	int medium_pizzas_to_order = (number_of_guests % GUESTS_PER_LARGE_PIZZA) / GUESTS_PER_MEDIUM_PIZZA;
 	int small_pizzas_to_order = number_of_guests - (large_pizzas_to_order * GUESTS_PER_LARGE_PIZZA + medium_pizzas_to_order * GUESTS_PER_MEDIUM_PIZZA);
    	
	//Print the results
    	cout << "You should order " << large_pizzas_to_order << " large pizzas." << endl;
    	cout << "You should order " << medium_pizzas_to_order << " medium pizzas." << endl;
	cout << "You should order " << small_pizzas_to_order << " small pizzas." << endl;

	return 0;
}
