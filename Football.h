#ifndef FOOTBALL_H
#define FOOTBALL_H

#include "Team.h"
#include "Game.h"

class Football : public Game {
protected:

    int first_team_goals = 0;
    int second_team_goals = 0;

    int first_team_fouls = 0;
    int second_team_fouls = 0;

    int first_team_substitutions = 0;
    int second_team_substitutions = 0;

    bool extra_time_played = false;
    bool penalties_played = false;

    int first_team_injuries = 0;
    int second_team_injuries = 0;
    string result;

public:
    Football();
    Football(Team& team1, Team& team2);
    Football(Team& team1, Team& team2, string game_name);
    void gol(Team& team);
    void substitution(Team& team);
    void injury(Team& team);
    void foul(Team& team);
    void check_extra_events();
    void statistic();
};

#endif