/*	
	main.cc
	Andrew Stauffer
	as211416@ohio.edu	
	CS 3560 HW 1
*/

#include "change.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char**argv){
	string one = argv[1];
	string two = argv[2];
	string exchange = "";
	getline(cin, exchange);
	exchange = Exchange(exchange, one, two);
	cout << exchange;

return 0;
}
