#include "guess_game_stl_arr.h"

void print_stl_array(std::array <int, 251> &arr, int size){

	for (int i = 0; i < size; i++)
	{

		std::cout<< arr[i]<<"\t";
	}

	std::cout<<"\n";

}