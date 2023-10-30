/*
	Guess game that expects user to input a nuber in order to gueess.
	The program stores the numbers typed by the user in an array.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string.h>
#include <limits>

 void print_array(int guesses_array [], int size_of_array){

	for(int i=0; i<size_of_array;i++){

		std::cout<<guesses_array[i]<<"\t";

	}
	std::cout<<"\n";
}

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
