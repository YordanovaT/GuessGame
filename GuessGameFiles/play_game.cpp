#include "guess_game.h"
namespace play_game
{
	void playing_guess_game()
	{

		int count=0;

		std::vector <int> guesses;

		int random = rand() % 251; //random number from 0 to 250

		while(true)
		{
			int guess;

			std::cin>>guess;
			count++;

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

		save_score::save_score(count); //using save_sore namespace
		std::cout<<"The squence of guesses you used is: \n";
		print_vector::print_vector(guesses); //using print_vector namespace
		std::cout<<"It took you: "<<guesses.size()<< " guesses to win\n";

	}
}
