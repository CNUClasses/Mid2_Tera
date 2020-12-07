/*
 * Person.h
 *
 *  Created on: Nov 19, 2020
 *      Author: keith
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>

//in attached cpp file
//TODO provide constructor implementation
//TODO provide destructor implementation
//TODO please ensure that this object can NOT be copied or assigned
class Person {
public:
	//if name is not null make a deep copy of name to myname
	//otherwise set myname to 0
	//copy age to age
	Person(int age, char *name);
	virtual ~Person();

	//ALREADY IMPLEMENTED DO NOT CHANGE
	std::string talk();

private:
	const int myage;
	char *myname;
};

#endif /* PERSON_H_ */
