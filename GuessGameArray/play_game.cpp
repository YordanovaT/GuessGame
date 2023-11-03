#include "guess_game_arr.h"

void playing_guess_game(){
	int guesses[251];
	int guess_count=0;

	int random = rand() % 251; //random number from 0 to 250



	while(true){
		int guess;

		std::cin>>guess;
		guesses[guess_count++]=guess;

		if (guess==random) {

			std::cout<< "You won!\n";
			break;
		}
		else if (guess<random) {
				std::cout<<"Your number is lower. Try again\n";

			 }
		else{
            std::cout<<"Your number is too high. Try again\n";
		}
	}
	std::cout<<"The squence of guesses you used is: \n";
	print_array(guesses,guess_count);
	std::cout<<"It took you: "<<guess_count<< " guesses to win\n";

}