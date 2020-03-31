#include <iostream>

//Declare func
int calc(int friBel, int monLef, int income);

int main(){

    //Declare variables
    int userFribel, userMonlef, userIncome, result;
    
    //Intro
    std::cout << "Hej och v\x84lkommen till CSN Fribelopps-kalkylator. Ett verktyg som hjälper dig räkna ut hur reducerat dina utbetalningar blir." << std::endl;
    // ask for input for userFribel
    std::cout << "Vänligen ange hur mycket fribeloppet är för önskat uträknat kalenderhalvar är." << std::endl;
    std::cin >> userFribel;
    //Ask user for input for userMonlef;
    std::cout << "Vänligen ange hur många månader av detta kalenderhalvår som kvarstår." << std::endl;
    std::cin >> userMonlef;
    //Ask user for calculated Income
    std::cout << "Vänligen ange hur mycket du planerar att tjäna detta kalender halvår." << std::endl;
    std::cin >> userIncome;
    
    //Send info to our calculating function
    result = calc(userFribel, userMonlef, userIncome);
    std::cout << "CSN kommer dra av " << result << " per resterande utbetalning(ar). ";
}   

int calc(int friBel, int monLef, int income){

    int result;

    //Check so that fribel isnt larger than income
    if(friBel >= income)
        std::cout << "Dina utbetalningar kommer ej bli drabbade";
    else{
        result = income - friBel;
        result = result * 0.61;
        result = result / monLef;
    }

    return result;
}