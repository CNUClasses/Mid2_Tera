//============================================================================
// Name        : 327_mid2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include "Person.h"
using namespace std;

int total_points=0;
//this is a template class, its mostly here as a helper for me
//the T and U are generic params, I can substitute any type for them
//they must be comparable with ==, templates are extremely hard to get right BTW
template<typename T, typename U>
bool EXPECT_EQ(T expectedVal, U actualVal,string testnumb, int pts){
	bool bout = (expectedVal == actualVal);
	if (bout){
		total_points+=pts;
		cout<<"SUCCESS "+testnumb+ "  total points="<<total_points;

	}
	else
		cout<<"FAIL "+ testnumb<< " Expected:"<<expectedVal<<"  got:"<<actualVal;
	cout<<endl;
	return bout;
}

int main() {
	char mystring1[]="Keith";

	Person p1(57,&mystring1[0]);
	string s = p1.talk();
	EXPECT_EQ (string("Keith is 57"), s,"1",30);

	Person p2(37,0);
	s = p2.talk();
	EXPECT_EQ (string("UNKNOWN is 37"), s,"2",10);

	//following are worth 10 points, graded on submission
//	p1=p2;			//should not compile
//	Person p3;		//should not compile
//	Person p4(p1);	//should not compile
}
