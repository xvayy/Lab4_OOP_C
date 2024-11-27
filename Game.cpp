#include "Game.h"


int Game::game_time = 0;

Game::Game(Team& team1, Team& team2) : team1(team1), team2(team2) {}

Game::Game(Team& team1, Team& team2, string game_name) : team1(team1), team2(team2), game_name(game_name) {}

void Game::start_game() {
    string path = "C:/Users/Yuliia/VSCode/Lab4/";
    if (game_name.length() > 0) {
        path += game_name + "/";
    }

    // Створення папки якщо вона не існує
    if (!filesystem::exists(path)) {
        filesystem::create_directories(path);
    }

    filename = path + team1.get_name() + "-" + team2.get_name() + ".txt";
    cout << filename << endl;
    outfile.open(filename, ios::app);
    if (!outfile.is_open()) {
        cerr << "Не вдалося відкрити файл для запису" << endl;
        return;
    }
    outfile << "\t\t\t\t" << game_name << endl;
    outfile << "Матч між командами: " << team1.get_name() << " та " << team2.get_name() << endl << endl;
    game_time = 0;
}

void Game::end_game() {
    if (outfile.is_open()) {
        outfile.close();
    }
}

int Game::calculate_time() {

    // Генератор випадкових чисел
    int random = rand() % 15 + 1;
    return random;
}

void Game::log_event(const string& event) {
    
    if (outfile.is_open()) {
        game_time += calculate_time();
        outfile << "Час: " << game_time << " хвилина\t\t" << event << endl;
    }
}