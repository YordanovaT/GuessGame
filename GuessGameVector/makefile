guess_game_vec: guess_game_vector.o play_game.o print_vector.o
	g++ guess_game_vector.o play_game.o print_vector.o -o guess_game_vec

guess_game_vector.o: guess_game_vector.cpp
	g++ -c guess_game_vector.cpp

play_game.o: play_game.cpp
	g++ -c play_game.cpp

print_vector.o: print_vector.cpp
	g++ -c print_vector.cpp

clean:
	rm *.o guess_game_vec