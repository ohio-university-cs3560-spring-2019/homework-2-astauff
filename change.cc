/*
	change.cc
	Andrew Stauffer
	as211416@ohio.edu
	CS 3560 HW 1
*/

#include "change.h"
#include <iostream>
#include <string>

using namespace std;

string Exchange(string phrase, const string& target, const string& rephrase) {
    size_t cur = 0;
    while ((cur = phrase.find(target, cur)) != string::npos) {
         phrase.replace(cur, target.length(), rephrase);
         cur += rephrase.length();
    }
    return phrase;
}
