#include "Team.h"

Team::Team(string name, string head_coach, string country, string city, int points){
    this->team_name = name;
    this->team_head_coach = head_coach;
    this->team_country = country;
    this->team_city = city;
    this->points = points;
}


// Вернутися пізніше
ostream& operator<<(ostream& os, const Team& team){
    // auto pad_string = [](const string& str, size_t length){
    //     if (str.size() < length){
    //         return str + string(length - str.size(), ' ');
    //     }
    //     return str;
    // };
    // os << pad_string(team.name, 10) << "\t\t" << pad_string(team.head_coach, 10) << "\t\t" << pad_string(team.country, 10) << "\t\t" << pad_string(team.city, 10) << "" << team.points << endl;
     os << team.team_name << endl
    << team.team_head_coach << endl 
    << team.team_country << endl
    << team.team_city << endl
    << team.points << endl << endl;
    return os;
}

bool operator==(const Team& team1, const Team& team2){
    return (team1.team_name == team2.team_name) && (team1.team_head_coach == team2.team_head_coach) && (team1.team_country == team2.team_country) && (team1.team_city == team2.team_city) && (team1.points == team2.points);
}

bool operator<(const Team& team1, const Team& team2){
    return team1.points < team2.points;
}