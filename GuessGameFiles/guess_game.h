#ifndef GUESS_GAME_ARR
#define GUESS_GAME_ARR
    #include <iostream>
    #include <fstream>
    #include <ctime>
    #include <cstdlib>
    #include <string.h>
    #include <limits>
    #include<vector>

    namespace print_vector
    {
        void print_vector(std::vector <int> &vec);
    }
    namespace save_score
    {
        void save_score(int guessed_count);
    }
    namespace play_game
    {
        void playing_guess_game();
    }
    
#endif