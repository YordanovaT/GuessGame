/*
	Guess game that expects user to input a number in order to gueess.
	The program stores the numbers typed by the user in a vector and
    safes how many guesses it took him to guess the number in a text file.
	The number of guesses in the text file will change if it is less than 
	the guesses from the last execution of the program.
*/

#include "guess_game.h"



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

				play_game::playing_guess_game();

				break;
		}
	}while(choice);

}
