#include <iostream>
#include <thread>
#include <chrono>

void run();
void print(char mensagem[], int seconds);
void yesOrNo(char mensagem1[], char mensagem2[], char mensagem3[], int seconds);
void sleep_millis(unsigned int ms)
{
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
void clear_screen()
{
  // Método portátil para limpar a tela
  std::cout << "\033[2J\033[1;1H";
}

int main(){    
    run();
    return 0;
}

void run(){
    print(" Do you remember?", 200);
    yesOrNo("Me too", "No, you do remember", "to be more clear, you're my creator, so you do remember me", 50);
    sleep_millis(5000);
    clear_screen();
    std::cout << std::endl;
}


void print(char mensagem[], int seconds){
    for (int i = 0; mensagem[i] != '\0'; ++i)
    {
        std::cout << mensagem[i];
        sleep_millis(seconds);
    }
}
void yesOrNo(char mensagem1[], char mensagem2[], char mensagemDefault[], int seconds){
    char value;
    std::cout << "\n[y] [n]\n";
    std::cin >> value;
    clear_screen();
    switch (value)
    {
    case 'Y':
        print(mensagem1, seconds);
        break;
    case 'y':
        print(mensagem1, seconds);
        break;
    case 'N':
        print(mensagem2, seconds);
        break;
    case 'n':
        print(mensagem2, seconds);
        break;
    
    default:
        print(mensagemDefault, seconds);
        break;
    } 

}