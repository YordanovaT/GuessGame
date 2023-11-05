#include "guess_game.h"

namespace save_score
{
	void save_score(int guessed_count)
	{
		std::ifstream input("scores.txt");

		if(!input.is_open())
		{
			std::cout<<"Unable to open and read the text file\n";
			return;
		}
		int best_score;

		input>>best_score;

		input.close();

		std::ofstream output("scores.txt");

		if(!output.is_open())
		{
			std::cout<<"Unable to open and read the text file\n";
			return;
		}

		if(guessed_count < best_score)
		{
			output<< guessed_count;

		}
		else
		{
			output<< best_score;
		}

		output.close();

	}
}

