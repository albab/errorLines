#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//HubNode Class
class HubNode {
	int data;
    	string name;
    	string location;
    	HubNode* next;

public:
	HubNode() {};
    	void SetVar(string aName, string aLocation) { name = aName; location = aLocation; };
    	void SetNext(HubNode* aNext) { next = aNext; };
    	string Name() { return name; };
    	string Location() { return location; };
    	HubNode* Next() { return next; };
};



// List class
class List {
	HubNode *head;
public:
	List() { head = NULL; };
	void Print();
    	void Append(string name, string location);
};

/**
 * Print hubs in the list
 */
void List::Print() {

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
    		cout << "NULL" << endl;
    	}
    	else {
    	// Traverse and print
    		do {
        		cout << tmp->Name();

        		cout << " --> ";
        		tmp = tmp->Next();
    		} while ( tmp != NULL );

    		cout << "NULL" << endl;
    }
}
/**
 * Append a hub to the list
 */
void List::Append(string name, string location) {

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
    	}
    	else {
    		// First node in the list
    		head = newHub;
    	}
}


int main() {
	List hubList;
	
	string line,name,location;
	int number,i=0;
	ifstream hubfile ("Hub.csv");
	if (hubfile.is_open()) {
		while ( getline (hubfile,line) ) { // Skip first line
			while(getline(hubfile,name,',')) { 				
				getline(hubfile,location,',');
				hubList.Append(name,location);
			}
		} 
	
	hubList.Print();
	hubfile.close();
	} else {cout << "WARNING: Can't open file."; }
	getchar();

	return 0;
}









 






