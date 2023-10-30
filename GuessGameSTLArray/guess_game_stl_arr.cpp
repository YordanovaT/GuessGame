/*
	Guess game that expects user to input a number in order to gueess.
	The program stores the numbers typed by the user in a STL array.
*/

#include <iostream>
#include <tchar.h>
#include <ctime>
#include <cstdlib>
#include<array>


void print_stl_array(std::array <int, 251> &arr, int size){

	for (int i = 0; i < size; i++)
	{

		std::cout<< arr[i]<<"\t";
	}

	std::cout<<"\n";

}

void playing_guess_game(){


	std::array <int, 251> guesses;
	int count=0; //used to keep track of how many guesses it took to guess

	int random = rand() % 251; //random number from 0 to to 250


	while(true)
	{
		int guess;

		std::cin>>guess;

		guesses[count++]=guess;


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
	print_stl_array(guesses, count);
	std::cout<<"It took you: "<<count<< " guesses to win\n";

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
				std::cout<<"Guess a number: \n";
				playing_guess_game();

				break;
		}
	}while(choice);

}
