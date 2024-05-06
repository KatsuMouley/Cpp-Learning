#include <iostream>

int main(){
    std::string questions[] = 
                            {"1.The shapes have meanings?",
                            "2.What's the best anime in the world?",
                            "3.What should you do to achieve sucess?",
                            "4.Is skibidi good?" };

    std::string Quiz[][4] =
                            {{"A.no","B.yes","C.Colors are better","D.perspective is cool"},
                            {"A.One Punch Man","B.Mob psycho","C.One piece","D.ALL OF THEM"},
                            {"A.nothing","B.play games","C.practice and Study","D.watch anime"},
                            {"A.no","B.yes","C.sure","D.of course!"}};
    
    int size = sizeof(questions) / sizeof(questions[0]);
    
    char answers[] = {'B','D', 'C', 'A'};
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout << "*************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*************\n";

        for (int j = 0; j < sizeof(Quiz[i]) / sizeof(Quiz[i][0]); j++)
        {
            std::cout << Quiz[i][j] << "\n";
        }
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            std::cout << "ACERTO MISERAVIL\n";
            score++;
        } else {
            std::cout << "ACERTO NADA BURRO!\n";
            std::cout << "A RESPOSTA CERTA E: " << answers[i] << '\n';
        }
    }
	std::cout << "*******************************\n";
	std::cout << "*          RESULTADOS         *\n";
	std::cout << "*******************************\n";
	std::cout << "ACERTOU " << score << " VEZES SEU MISERAVEL!\n";
	std::cout << "ERAM " << size << " QUESTOES MOCO\n";
	std::cout << "SCORE: " << (score/(double)size)*100 << "%";
    
    return 0;
}
/*
int main() {

	std::string questions[] = 	{"1. What year was C++ created?: ",
								 "2. Who invented C++?: ",
								 "3. What is the predecessor of C++?: ",
								 "4. Is the Earth flat?"};

	std::string options[][4] = 	{{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
								{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
								{"A. C", "B. C+", "C. C--", "D. B++"},
								{"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

	char answerKey[] = {'C', 'B', 'A', 'B'};

	int size = sizeof(questions)/sizeof(questions[0]);
	char guess;
	int score;

	for(int i = 0; i < size; i++){
		std::cout << "*******************************\n";
		std::cout << questions[i] << '\n';
		std::cout << "*******************************\n";

		for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
			std::cout << options[i][j] << '\n';
		}

		std::cin >> guess;
		guess = toupper(guess);

		if(guess == answerKey[i]){
			std::cout << "CORRECT\n";
			score++;
		}
		else{
			std::cout << "WRONG!\n";
			std::cout << "Answer: " << answerKey[i] << '\n';
		}
	}
	std::cout << "*******************************\n";
	std::cout << "*           RESULTS           *\n";
	std::cout << "*******************************\n";
	std::cout << "CORRECT GUESSES: " << score << '\n';
	std::cout << "# of QUESTIONS: " << size << '\n';
	std::cout << "SCORE: " << (score/(double)size)*100 << "%";
 
    return 0;
}
*/