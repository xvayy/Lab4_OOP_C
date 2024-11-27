#ifndef TEAM
#define TEAM

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Team{
    protected:
        string team_name;
        string team_head_coach;
        string team_country;
        string team_city;
        int points;
    public:
        Team() = default;
        Team(string name, string head_coach, string country, string city, int points);
        void buy_player();
        void sold_player();
        void players_list();
        void team_statistic();
        void player_statistic();

        string get_name(){return team_name;}
        int get_points(){return points;}
    
    friend ostream& operator<<(ostream& os, const Team& team);
    friend bool operator==(const Team& team1, const Team& team2);
    friend bool operator<(const Team& team1, const Team& team2);
};
#endif