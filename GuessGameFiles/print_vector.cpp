#include "guess_game.h"

namespace print_vector
{
	void print_vector(std::vector <int> &vec)
	{

		for (int i = 0; i < vec.size(); i++)
		{

			std::cout<< vec[i]<<"\t";
		}

		std::cout<<"\n";

	}
}
