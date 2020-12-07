/*
 * Person.cpp
 *
 *  Created on: Nov 19, 2020
 *      Author: keith
 */
#include <iostream>
#include <string>
#include <string.h>
#include "Person.h"
using namespace std;


//ALREADY IMPLEMENTED DO NOT CHANGE
string Person::talk(){
	string s("UNKNOWN");

	if(myname)
		s=myname;

	s=s+" is " + to_string(myage);
	return s;
}



