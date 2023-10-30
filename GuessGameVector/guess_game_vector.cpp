/*
	Guess game that expects user to input a number in order to gueess.
	The program stores the numbers typed by the user in a vector.
*/

#include <iostream>
#include <tchar.h>
#include <ctime>
#include <cstdlib>
#include <vector>


void print_vector(std::vector <int> &vec){

	for (int i = 0; i < vec.size(); i++)
	{

		std::cout<< vec[i]<<"\t";
	}

    std::cout<<"\n";

}


void playing_guess_game(){

	std::vector <int> guesses;

	int random = rand() % 251; //random number from 0 to 250

	while(true)
	{
		int guess;

		std::cin>>guess;

		guesses.push_back(guess);

		if (guess==random)
		{

			std::cout<< "You won!\n";
			break;
		}
		else if (guess<random)
		{
				std::cout<<"Your number is lower. Try again\n";

		}
		else
		{
            std::cout<<"Your number is too high. Try again\n";
		}

	}
	std::cout<<"The squence of guesses you used is: \n";
	print_vector(guesses);
	std::cout<<"It took you: "<<guesses.size()<< " guesses to win\n";

}

int _tmain(int argc, _TCHAR* argv[])
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

				playing_guess_game();

				break;
		}
	}while(choice);

}
