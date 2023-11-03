#include "guess_game_vec.h"

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