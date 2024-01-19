#include "Solution2.h"

#include <ostream>

#include <fstream>
#include <iostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
	float solde = 0;
	std::string line;
	std::string action = "";
	std::string value = "";

	std::ifstream myfile("BankAccount/" + accountName + ".txt");
	if (myfile.is_open()) {
		std::string ligne;
		std::string delimiter = " ";
        while (std::getline(myfile, ligne)) {
            size_t position = 0;
			position = ligne.find(delimiter);
            action = ligne.substr(0, position);
			value = ligne.substr(position + 1, std::string::npos);
			if (action == "DEPOSIT") {
				solde += std::stoi(value);
			}else if(action == "WITHDRAW") {
				solde -= std::stoi(value);
			}
			std::cout << solde << std::endl;
        }
	}
}

#endif
