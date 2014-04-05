#include "HubList.h"

//init List
HubList::HubList() {
	head = NULL;
}


/**
 * Print hubs in the list
 */
void HubList::Print() {

    	// Temp pointer
	HubNode *tmp = head;
   	//Empty list?
    	if ( tmp == NULL ) {
		cout << "EMPTY" << endl;
		return;
    	}

    	// Single node
    	if ( tmp->Next() == NULL ) {
    		cout << tmp->Name();
    		cout << " --> ";
		cout << tmp->Location();
    		cout << "NULL" << endl;
    	} else {
		// Traverse and print
    		do {
			cout << tmp->Name();
			cout << " --> ";
			cout << tmp->Location();
        		cout << " --> ";
        		tmp = tmp->Next();
    		} while ( tmp != NULL );
    		cout << "NULL" << endl;
	}
}
/**
 * Append a hub to the list
 */
void HubList::Append(string name, string location) {

	//Lets make a new hub
    	HubNode* newHub = new HubNode();
    	newHub->SetVar(name,location);
    	newHub->SetNext(NULL);

    	//temporary hub pointer
    	HubNode *tmp = head;

    	if ( tmp != NULL ) {
		// Find tail
    		while ( tmp->Next() != NULL ) {
			tmp = tmp->Next();
    		}

    		// Point the last node to the new node
    		tmp->SetNext(newHub);
    	} else {
    		// First node in the list
    		head = newHub;
    	}
}
