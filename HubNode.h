#ifndef HUBNODE_H
#define HUBNODE_H

#include <string>
#include <iostream>
#include <fstream>
#include "HubList.h"

using namespace std;


//HubNode Class
class HubNode {
	int data;
    	string name;
    	string location;
    	HubNode* next;

public:
	HubNode();
	HubNode(int data, string name, string location, HubNode* next);
	void SetVar(string aName, string aLocation);
	void SetNext(HubNode* aNext);
	string Name();
	string Location();
    	HubNode* Next();
};


#endif