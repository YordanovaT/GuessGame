#include "guess_game_stl_arr.h"

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