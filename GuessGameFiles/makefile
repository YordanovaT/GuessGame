guess.out: guess_game.o play_game.o save_score.o print_vector.o
	g++ guess_game.o play_game.o save_score.o print_vector.o -o guess.out

guess_game.o: guess_game.cpp
	g++ -c guess_game.cpp

play_game.o: play_game.cpp
	g++ -c play_game.cpp

save_score.o: save_score.cpp
	g++ -c save_score.cpp

print_vector.o: print_vector.cpp
	g++ -c print_vector.cpp

clean:
	rm *.o guess