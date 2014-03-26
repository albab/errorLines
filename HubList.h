#ifndef HUBLIST_H
#define HUBLIST_H

#include <string>
#include <iostream>
#include <fstream>
#include "HubNode.h"

class HubNode;

using namespace std;

// List class
class HubList {
private:
	HubNode* head;
public:
	HubList();
	void Print();
	void Append(string name, string location);
};


#endif