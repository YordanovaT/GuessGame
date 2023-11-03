/*
	Guess game that expects user to input a nuber in order to gueess.
	The program stores the numbers typed by the user in an array.
*/
#include "guess_game_arr.h"

int main()
{
	srand(time(NULL)); //change the squence of numbers in order to generate random numbers
	int choice;

	do{

		std::cout<<"Press 0 to exit program"<<std::endl<<"Press 1 to play a game\n";
		std::cin>>choice;

		switch(choice)
		{
			case 0:

				std::cout<<"Exiting program. Bye!\n";
				return 0;

			case 1:
				std::cout<<"Guess the number\n";
				playing_guess_game();

				break;
		}
	}while(choice);
}