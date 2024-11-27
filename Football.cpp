#include "Football.h"

Football::Football() : Game(team1, team2) {}

Football::Football(Team& team1, Team& team2) : Game(team1, team2){}

Football::Football(Team& team1, Team& team2, string game_name) : Game(team1, team2, game_name){}

void Football::gol(Team& team) {
    if (team.get_name() == team1.get_name()) {
        first_team_goals++;
        log_event("Гол " + team1.get_name());
    } else {
        second_team_goals++;
        log_event("Гол " + team2.get_name());
    }
}

void Football::substitution(Team& team) {
    if (team.get_name() == team1.get_name()) {
        first_team_substitutions++;
        log_event("Заміна " + team1.get_name());
    } else {
        second_team_substitutions++;
        log_event("Заміна " + team2.get_name());
    }
}

void Football::injury(Team& team) {
    if (team.get_name() == team1.get_name()) {
        first_team_injuries++;
        log_event("Травма " + team1.get_name());
    } else {
        second_team_injuries++;
        log_event("Травма " + team2.get_name());
    }
    
}

void Football::foul(Team& team) {
    if (team.get_name() == team1.get_name()) {
        first_team_fouls++;
        log_event("Фол " + team1.get_name());
    } else {
        second_team_fouls++;
        log_event("Фол " + team2.get_name());
    }
}

void Football::check_extra_events(){
    if (game_time > 90){
        extra_time_played = true;
    }
    if (game_time >= 120){
        penalties_played = true;
    }
}


void Football::statistic(){
    check_extra_events();
    if (penalties_played) {
        int randomChoice = rand() % 2;
        result = "Переможець: " + (randomChoice == 0 ? team1.get_name() : team2.get_name()) + " (За результатами пенальті)";
    }
    else if(first_team_goals > second_team_goals){
        result = "Переможець: " + team1.get_name();
    } else if (first_team_goals < second_team_goals)
    {
        result = "Переможець: " + team2.get_name();
    } else {
        result = "Нічия";
    }

    outfile.open(filename, ios::app);
    if (outfile.is_open()) {
       outfile << "\nСтатистика команди: " << team1.get_name() << endl
    << "Голи: " << first_team_goals << endl
    << "Фоли: " << first_team_fouls << endl
    << "Замін: " << first_team_substitutions << endl
    << "Травми: " << second_team_injuries
    << endl << endl

    << "Статистика команди: " << team2.get_name() << endl
    << "Голи: " << second_team_goals << endl
    << "Фоли: " << second_team_fouls << endl
    << "Замін: " << second_team_substitutions << endl
    << "Травми: " << first_team_injuries
    << endl << endl
    << result << endl; 
    }  
}