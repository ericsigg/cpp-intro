#pragma once
#include <iostream>
#include <string>

using namespace std;

class player {
	public:
		player();
		player(string intputName);
		
		string name;
		
		void Greet();
};
