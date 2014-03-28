#include "HubNode.h"

HubNode::HubNode() {
	next = NULL;
}

HubNode::HubNode(string aLocation) {
	location = aLocation;
}

void HubNode::SetVar(string aName, string aLocation) { 
	name = aName; 
	location = aLocation; 
}

void HubNode::SetNext(HubNode* aNext) { 
	next = aNext; 
}


string HubNode::Name() { 
	return name; 
}


string HubNode::Location() { 
	return location; 
}

HubNode* HubNode::Next() { 
	return next;
}







 






