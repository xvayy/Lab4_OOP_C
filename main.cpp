#include <iostream>
#include <fstream>
#include "Game.h"
#include "Football.h"
#include "Team.h"

int main(){
    
    cout << "\nHello\n";
    
    srand(time(nullptr));

    Team Shakhtar("Shakhtar", "Jovicevic", "Ukraine", "Donetsk", 23);
    Team Dynamo("Dynamo", "Shovkovskyi", "Ukraine", "Kyiv", 29);
    Team Zorya("Zorya", "Leuven", "Ukraine", "Luhansk", 15);
    Team Kryvbas("Kryvbas", "Vernydub", "Ukraine", "Kryvyi Rih", 18);
    Team Vorskla("Vorskla", "Maksymov", "Ukraine", "Poltava", 13);
    Team Kolos("Kolos", "Vyshnyak", "Ukraine", "Kovalivka", 12);
    Team Oleksandria("Oleksandria", "Rotan", "Ukraine", "Oleksandria", 29);
    Team Chornomorets("Chornomorets", "Chornomorets", "Ukraine", "Odesa", 12);
    Team Obolon("Obolon", "Shyshchenko", "Ukraine", "Donetsk", 6);
    Team LNZ("LNZ", "Carrasco", "Ukraine", "Cherkasy", 18);
    Team Left("Left Bank", "Babich", "Ukraine", "Mariupol", 9);
    Team Veres("Veres", "Shandruko", "Ukraine", "Rivne", 12);
    Team Karpaty("Karpaty", "Vovchuk", "Ukraine", "Lviv", 18);
    Team Inhulets("Inhulets", "Lavrynenko", "Ukraine", "Petrove", 6);
    Team Rukh("Rukh", "Kuchuk", "Ukraine", "Lviv", 15);
    Team Polissya("Polissya", "Kalytyntsev", "Ukraine", "Zhytomyr", 22);

    /*
    Football match(Shakhtar, Dynamo, "Football");
    match.start_game();
    match.gol(Shakhtar);
    match.gol(Shakhtar);
    match.gol(Dynamo);
    match.foul(Shakhtar);
    match.injury(Dynamo);
    match.substitution(Dynamo);
    match.gol(Dynamo);
    match.gol(Dynamo);
    match.foul(Dynamo);
    match.foul(Shakhtar);
    match.foul(Shakhtar);
    match.substitution(Shakhtar);
    match.substitution(Shakhtar);
    match.gol(Dynamo);
    match.end_game();
    match.statistic();

    Football match1(Rukh, Kolos, "Football");
    match1.start_game();
    match1.gol(Rukh);
    match1.gol(Rukh);
    match1.gol(Rukh);
    match1.foul(Kolos);
    match1.injury(Kolos);
    match1.substitution(Kolos);
    match1.gol(Kolos);
    match1.gol(Kolos);
    match1.foul(Rukh);
    match1.foul(Rukh);
    match1.foul(Rukh);
    match1.substitution(Rukh);
    match1.substitution(Rukh);
    match1.gol(Kolos);
    match1.end_game();
    match1.statistic();
    
    Football match3(Karpaty, Zorya, "Football");
    match3.start_game();
    match3.gol(Zorya);
    match3.gol(Karpaty);
    match3.gol(Karpaty);
    match3.end_game();
    match3.statistic();
    return 0;
    */
    


    Football match4(Dynamo, Polissya, "Football");
    match4.start_game();
    match4.gol(Dynamo);
    match4.foul(Dynamo);
    match4.gol(Dynamo);
    match4.foul(Polissya);
    match4.injury(Dynamo);
    match4.substitution(Dynamo);
    match4.gol(Polissya);
    match4.end_game();
    match4.statistic();
}