#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enwinner{win = 1, lose = 2, draw = 3};
enum enchoice{stone = 1, paper = 2, scissors = 3};

struct winner{
    int perwinner = 0;
    int comwinner = 0;
    int nowinner = 0;
};

int RandomFunction(int from, int to){
    return (rand() % (to - from + 1) + from);
}

int ReadNumberOfRoundInThisGame(void){
    int number;
    cout << "enter number of round in this game : ";
    cin >> number;
    return number;
}

enchoice    ReadPersonChoice(void){
    int choice;
    cout << "\n\nenter your choice number :\n(1) stone\n(2) paper\n(3) scissors\n";
    cin >> choice;
    return (enchoice)choice;
}

enchoice    ComputerRandomChoice(void){
    return (enchoice)(RandomFunction(1, 3));
}

enwinner checkWinner(enchoice person, enchoice computer, winner &Winner){
    if (person == computer) {
        Winner.nowinner++;
        return enwinner::draw;
    }
    if ((person == enchoice::stone && computer == enchoice::scissors) ||
        (person == enchoice::paper && computer == enchoice::stone) ||
        (person == enchoice::scissors && computer == enchoice::paper)) {
        Winner.perwinner++;
        return enwinner::win;
    }
    Winner.comwinner++;
    return enwinner::lose;
}


string enchoice_To_string(enchoice player){
    switch (player) {
        case enchoice::paper:   return "paper";
        case enchoice::scissors: return "scissors";
        case enchoice::stone:  return "stone";
        default:             return "unknown";
    }
}

string enwinner_To_string(enwinner winner){
    switch (winner) {
        case enwinner::win:   return "[person]";
        case enwinner::lose:  return "[computer]";
        case enwinner::draw:  return "[no winner]";
        default:             return "unknown";
    }
}

void    SystemColor(enwinner winner){
    switch(winner){
        case enwinner::win:
            system("printf '\\033]11;#00ff00\\007'");
            system("printf '\\033]10;#000000\\007'");
            break;
        case enwinner::lose:
            system("printf '\\033]11;#ff0000\\007'");
            system("printf '\\033]10;#000000\\007'");
            break;
        case enwinner::draw:
            system("printf '\\033]11;#ffff00\\007'");
            system("printf '\\033]10;#000000\\007'");
            break;
        default:
            return;           
    }
}

void    PrintTableOfRound(enwinner winner, int round, enchoice person, enchoice computer){
    cout << "\n\n___________Round[" << round << "]___________" << endl;
    cout << "person choice : " << enchoice_To_string(person) << endl;
    cout << "computer choice : " << enchoice_To_string(computer) << endl;
    cout << "Round winner : " << enwinner_To_string(winner) << endl;
    cout << "______________________________" << endl;
}

enwinner  ResultWinner(winner Winner){
    if (Winner.comwinner > Winner.perwinner){
        return enwinner::lose;
    }
    else if (Winner.perwinner > Winner.comwinner){
        return enwinner::win;
    }
    else
        return enwinner::draw;

}

void    printTableOfResult(int number, winner Winner){
    SystemColor(ResultWinner(Winner));
    cout << "\n\n\t\t________________________________________________________________\n" << endl;
    cout << "\t\t\t\t\t+++ G A M E O V E R +++\t\t" << endl;
    cout << "\t\t________________________________________________________________" << endl;
    cout << "\t\t_____________________[GAME RESULT]______________________\n" << endl;
    cout << "\t\t       Game Rounds        : " << number << endl;
    cout << "\t\t       player win times   : " << Winner.perwinner << endl;
    cout << "\t\t       computer win times : " << Winner.comwinner << endl;
    cout << "\t\t       Draw times         : " << Winner.nowinner << endl;
    cout << "\t\t       Result winner      : " << enwinner_To_string(ResultWinner(Winner)) << endl;
    cout << "\t\t________________________________________________________\n" << endl;
}

void    PrintResult(int number){
    winner Winner;
    for(int round = 1; round <= number; round++){
        enchoice person = ReadPersonChoice();
        enchoice computer = ComputerRandomChoice();
        enwinner winner = checkWinner(person, computer, Winner);
        SystemColor(winner);
        PrintTableOfRound(winner, round, person, computer);
        if (round == number)
            printTableOfResult(number, Winner);
    }
}

int main(){
    srand((unsigned)time(NULL));
    char reponce;
    do{
        system("printf '\\033]110\\007\\033]111\\007'");
        system("stty sane");
        system("clear");
        PrintResult(ReadNumberOfRoundInThisGame());
        cout << "\t\tdo you want play agrai (y / n) ?";
        cin >> reponce;
    }while(reponce == 'y' || reponce == 'Y');
    system("printf '\\033]110\\007\\033]111\\007'");
    return 0;
}