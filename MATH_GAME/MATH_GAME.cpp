#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

enum enlevel{easy = 1, mediam = 2, hard = 3, mix = 4};
enum enoperation{add = 1, sub = 2, Mul = 3, Div = 4, Mix = 5};

struct answer{
    int RightAnswer = 0;
    int WrongAnswer = 0;
};

int ReadNumberOfQuestions(void){
    int number;
    cout << "how many Question do you want answer ? : " << endl;
    cin >> number;
    while (cin.fail()){
        cin.clear();
        cin.ignore(LLONG_MAX, '\n');
        cout << "Invalid Number, Enter a valid one:" << endl;
        cin >> number;
    }
    return number;
}

enlevel ReadLevelOfQuestions(void){
    int level;
    cout << "enter Question level :\n(1) easy\n(2) mediam\n(3) hard\n(4) mix\n--> ";
    cin >> level;
    return (enlevel)level;
}

enoperation ReadOperationOfQuestion(void){
    int operation;
    cout << "enter Question operation :\n(1) add\n(2) sub\n(3) Mul\n(4) div\n(5) mix\n--> ";
    cin >> operation;
    return (enoperation)operation;
}

int RandomFunction(int From, int To){
    return (rand() % (To - From + 1) + From);
}

int LevelOfQuestion(enlevel level){
    switch (level){
    case enlevel::easy:
        return RandomFunction(1, 10);
        break;
    case enlevel::mediam:
        return RandomFunction(11, 100);
        break;
    case enlevel::hard:
        return RandomFunction(101, 1000);
        break;
    case enlevel::mix:
        return LevelOfQuestion((enlevel)RandomFunction(1, 3));
    default:
        break;
    }
    return 0;
}

int OperationOfQuestion(enoperation opearation, int number1, int number2, char &opstring){
    switch (opearation){
    case enoperation::add:
        opstring = '+';
        return (number1 + number2);
        break;
    case enoperation::sub:
        opstring = '-';
        return (number1 - number2);
        break;
    case enoperation::Mul:
        opstring = 'x';
        return (number1 * number2);
        break;
    case enoperation::Div:
        opstring = '/';
        return (number1 / number2);
        break;
    case enoperation::Mix:
        return OperationOfQuestion((enoperation)RandomFunction(1, 4), number1, number2, opstring);
        break;
    default:
        break;
    }
    return 0;
}

void  checkAnswer(int useranswer, int correctanswer, answer &Answer){
    if(useranswer == correctanswer){
        system("printf '\\033]11;#00ff00\\007'");
        system("printf '\\033]10;#000000\\007'");
        Answer.RightAnswer++;
        cout << "right answer : -)" << endl;
    }
    else{
        system("printf '\\033]11;#ff0000\\007'");
        system("printf '\\033]10;#000000\\007'");
        Answer.WrongAnswer++;
        cout << "wrong answer : -(\ncorrect answer is " << correctanswer << endl;
    }
}

string  FinalResult(answer Answer){
    if (Answer.RightAnswer >= Answer.WrongAnswer){
        system("printf '\\033]11;#00ff00\\007'");
        system("printf '\\033]10;#000000\\007'");
        return ("FINAL RESULT IS PASS : -)");
    }
    else{
        system("printf '\\033]11;#ff0000\\007'");
        system("printf '\\033]10;#000000\\007'");
        return ("FINAL RESULT IS FIAL : -(");
    }
}

void    PrintTableResult(answer Answer, int number, enoperation operation, enlevel level){
    string Level[4] = {"EASY", "MEDIAM", "HARD", "MIX"};
    string Operation[5] = {"ADD", "SUB", "MUL", "DIV", "MIX"};
    cout << "\n\n\t\t___________________________________________" << endl;
    cout << "\t\t\t  " << FinalResult(Answer) << endl;
    cout << "\t\t___________________________________________" << endl;
    cout << "\t\t     number of Question     : " << number << endl;
    cout << "\t\t     Question level         : " << Level[level - 1] << endl;
    cout << "\t\t     Question operation     : " << Operation[operation - 1] << endl;
    cout << "\t\t     number of right answer : " << Answer.RightAnswer << endl;
    cout << "\t\t     number of wrong answer : " << Answer.WrongAnswer << endl;
    cout << "\t\t___________________________________________" << endl;
}

void    PrintResult(enoperation operation, enlevel level, int number){
    answer Answer;
    for (int round = 1; round <= number; round++){
        cout << "Question [" << round << "/" << number << "]" << endl;
        char op;
        int number1 = LevelOfQuestion(level);
        int number2 = LevelOfQuestion(level);
        int correctResult = OperationOfQuestion(operation, number1, number2, op);
        cout << "\n  " << number1 << "\n" << op << "\n  " << number2 << "\n____________\n  ";
        int userResult;
        cin >> userResult;
        checkAnswer(userResult, correctResult, Answer);
        if (round == number){
            PrintTableResult(Answer, number, operation, level);
        }
    }
}

int main(){
    srand((unsigned)time(NULL));
    char reponce = 'y';
    do{
        system("tput sgr0");
        system("stty sane");
        system("clear");
        int number = ReadNumberOfQuestions();
        enlevel level = ReadLevelOfQuestions();
        enoperation operation = ReadOperationOfQuestion();
        PrintResult(operation, level, number);
        cout << "do you want other Question ? \n--> ";
        cin >> reponce;
    }while(reponce == 'y' || reponce == 'Y');
    return 0;
}