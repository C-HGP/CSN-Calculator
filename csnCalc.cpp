#include <iostream>

//Declare func
int calc(int friBel, int monLef, int income);
void caseEarnOBel();

int main(){

    //Declare variables
    int choice;
    
    //Intro
    std::cout << "Hi and welcome to 'CSN-Fribelopp' calculator. A tool designed to help Swedish students." << std::endl;
    std::cout << "If you're working beside of your studies, this tool will help you to not get into trouble with CSN. " << std::endl;

    //Menu
    std::cout << "What would you like to calculate?"<< std::endl;
    std::cout << "1. Earn over 'fribelopp'" << std::endl;
    std::cout << "2. Reserved" << std::endl;
    std::cout << "3. Reserved" << std::endl;

    std::cin >> choice;
    switch(choice)
    {
    case 1: caseEarnOBel();

    case 2: 

    case 3: 
  
    default: std::cout << "Invalid choice, exiting... " << std::endl;
        exit(0);   
   
    }

}   

void caseEarnOBel(){
    
    //Declare variable
    int userFribel, userMonlef, userIncome, result;
    
    // ask for input for userFribel
    std::cout << "Please enter how much your 'fribelopp' for the term is. " << std::endl;
    std::cin >> userFribel;
    //Ask user for input for userMonlef;
    std::cout << "Please enter how many payments there is left for the term. " << std::endl;
    std::cin >> userMonlef;
    //Ask user for calculated Income
    std::cout << "Please enter how much you're planning to earn for the term. " << std::endl;
    std::cin >> userIncome;
    
    //Send info to our calculating function
    result = calc(userFribel, userMonlef, userIncome);
    std::cout << "CSN will take away: " << result << " from the remaining payment(s)";

    //Stop program
    exit(0); 
}

int calc(int friBel, int monLef, int income){

    int result;

    //Check so that fribel isnt larger than income
    if(friBel >= income){
        std::cout << "Dina utbetalningar kommer ej bli drabbade";
        exit(0);
    }
    else{
        result = income - friBel;
        result = result * 0.61;
        result = result / monLef;
    }

    return result;
}