//============================================================================
// Name        : HelloWorld.cpp
// Author      : Aleksey
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Messenger.h"
using namespace std;

// this is a hello world app starting point
int main()
{
	cout << "Hello World!!!" << endl;
	cout << "See you later." << endl;
	cout << "Yours sincerely, Eclipse." << endl;
	cout << "Yours sincerely, Eclipse." << endl;
	Messenger msg;
	msg.SayHello();
	return 0;
}
