#include "guess_game_arr.h"

void print_array(int guesses_array [], int size_of_array){

	for(int i=0; i<size_of_array;i++){

		std::cout<<guesses_array[i]<<"\t";

	}
	std::cout<<"\n";
}