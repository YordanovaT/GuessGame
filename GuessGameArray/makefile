guess_game_arr: guess_game_array.o play_game.o print_arr.o
	g++ guess_game_array.o play_game.o print_arr.o -o guess_game_arr

guess_game_array.o: guess_game_array.cpp
	g++ -c guess_game_array.cpp

play_game.o: play_game.cpp
	g++ -c play_game.cpp

print_arr.o: print_arr.cpp
	g++ -c print_arr.cpp

clean:
	rm *.o guess_game_arr