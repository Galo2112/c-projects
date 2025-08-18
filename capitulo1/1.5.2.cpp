#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item1, item2; // read first number and ensure that we have data to process 
	if (std::cin >> item1) { int cnt = 1; // store the count for the current value we r processing 
	while (std::cin >> item2) { // vread the remaining numbers 
		if (item2.isbn() == item1.isbn()) // if the values are the same 
			++cnt; // add 1 to cnt 
		else { // otherwise, print the count for the previous value 
			std::cout << item1 << " occurs " << cnt << " times " << std::endl; item1 = item2; // remember the new value 
			cnt = 1; // reset the counter 
		} } // while loop ends here 
	// remember to pront the count for the last value in the file 
	std::cout << item1 << " occurs " << cnt << " times " << std::endl; }// outermost if statement ends here 
	return 0; }
