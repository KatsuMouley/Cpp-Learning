#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

void print(std::string mensagem, int milliseconds);
void sleep_millis(unsigned int ms);
void clear_screen();

int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        system("cls");
        drawBoard(spaces);
        sleep_millis(1500);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
        

        sleep_millis(1500);
        system("cls");
        print("Computando movimento\n", 70);
        print(".....!", 400);
        sleep_millis(1500);
        
        computerMove(spaces, computer);
        system("cls");
        drawBoard(spaces);
        sleep_millis(1500);
        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
    }

    print("Thanks for playing!\nMade by Katsu Mouley 2024...", 200);
    std::cout << std::endl;
    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
}

void playerMove(char *spaces, char player)
{
    int number;
    do{
        std::cout << "Escolha uma posicao (1-9)";
        std::cin >> number;
        if(spaces[number-1] == ' '){
            spaces[(number-1)] = player;
            break;
        }
    }while (!number > 0 || !number < 8);
    
}

void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(NULL));
    while(true){
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
        
    }
}

bool checkWinner(char *spaces, char player, char computer)
{
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? print("YOU WIN\n", 200) : print("YOU LOSE\n", 200);
    }
    else{
        return false;
    }

    return true;
}

bool checkTie(char *spaces)
{
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    print("It's a TIE!\n", 200);
    return true;
    return 0;
}


void sleep_millis(unsigned int ms)
{
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void print(std::string mensagem, int milliseconds){
    for(int i = 0; i < mensagem.length(); i++){  
        std::cout << mensagem[i];
        sleep_millis(milliseconds);
    }
}