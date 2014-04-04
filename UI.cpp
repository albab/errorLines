#include <iostream>
#include <string>
	int main()
	{
		char i;
		do
		{
		std::cout << "Would you like to book a flight? (press y for yes or press q to quit)\n";
		std::cin>>i;
		char destination [50];
		char date [10];
		switch(i)
		{
		case 'y':
			std::cout<<"Where would you like to fly?\n";
			std::cin>>destination;		//user's input to where the want to fly to
			std::cout<<"What date would you like your flight? (DD/MM/2014)\n";
			std::cin>>date;				//user's input for what date they would like to fly
			
			//std::cout<<"";			//this is where the flight options are printed
			
			std::cout<<"Which flight would you like?\n";
			//std::cin>>;				//user's input to which flight they want to take
			std::cout<<"Would you like to check baggage?\n\n";
			//std::cin>>;				//user's input to check bag
			
			//std::cout<<"";			//this is where we print the ticket
			break;
		
		case 'q':
			break;

		}
		}while (i!='q');
		
			return 0;
	}

