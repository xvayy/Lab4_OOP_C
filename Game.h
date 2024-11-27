#ifndef GAME
#define GAME

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <filesystem>
#include "Team.h"
using namespace std;

class Game {
    protected:
        string game_name;
        string filename;
        Team& team1;
        Team& team2;
        ofstream outfile;
        static int game_time;
    public:
        Game(Team& team1, Team& team2);
        Game(Team& team1, Team& team2, string game_name);
        void start_game();
        void end_game();
        int calculate_time();
        void log_event(const string& event);
};

#endif