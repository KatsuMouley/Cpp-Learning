#include <iostream>
#include <thread>
#include <chrono>

void run();
void test();
void print(std::string mensagem, int seconds);
void yesOrNo(std::string mensagem1, std::string mensagem2, std::string mensagemDefault, int seconds);
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
    yesOrNo("That's good", "No, you do remember", "to be more clear, you're my creator, so you do remember", 50);
    sleep_millis(2000);
    clear_screen();
    print("hey, let me tell you a story", 100);
    sleep_millis(2000);
    clear_screen();
    print("It's about a young girl called Kiko naito ryuu Suzanna", 100);
    print("\nto be more specific let's call her Suzanna", 100);
    sleep_millis(2000);
    clear_screen();
    print("As a kid, she lived on the montains with her clan, Kiko naito Ryuu", 100);
    sleep_millis(5000);
    clear_screen();
    std::cout << std::endl;
}

void print(std::string mensagem, int seconds){
    for(int i = 0; i < mensagem.length(); i++){  
        std::cout << mensagem[i];
        sleep_millis(seconds);
    }
}

void yesOrNo(std::string mensagem1, std::string mensagem2, std::string mensagemDefault, int seconds){
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

// void test(){
//     std::string s = "string";
//     for(char c : s){  
//         //do stuff
//     }  
//     // You can also iterate through a string using a for loop:

//     std::string sd = "string";  
//     for(int i = 0; i < sd.length(); i++){  
//     char cd = s[i];
//     //do stuff. 
//     }
// }