guess_game_stl_arr: guess_game_stl_arr.o play_game.o print_stl_array.o
	g++ guess_game_stl_arr.o play_game.o print_stl_array.o -o guess_game_stl_arr
guess_game_arr.o: guess_game_stl_arr.cpp
	g++ -c guess_game_stl_arr.cpp

play_game.o: play_game.cpp
	g++ -c play_game.cpp

print_stl_array.o: print_stl_array.cpp
	g++ -c print_stl_array.cpp

clean:
	rm *.o guess_game_stl_arr