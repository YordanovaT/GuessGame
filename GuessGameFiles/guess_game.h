#ifndef GUESS_GAME_ARR
#define GUESS_GAME_ARR
    #include <iostream>
    #include <fstream>
    #include <ctime>
    #include <cstdlib>
    #include <string.h>
    #include <limits>
    #include<vector>

    void print_vector(std::vector <int> &vec);
    void save_score(int guessed_count);
    void playing_guess_game();

#endif