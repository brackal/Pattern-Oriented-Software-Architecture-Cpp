///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Client.h"

Client::Client() {
}

Client::~Client() {
}

void Client::Run() {
    Model model;

    BarChartView barChartView(&model);

    TableView tableView(&model);
    Controller* tableController = tableView.GetController();

    std::cout << "Press 1 to vote for 'Party A'\n";
    std::cout << "Press 2 to vote for 'Party B'\n";
    std::cout << "Press 3 to vote for 'Party C'\n";
    std::cout << "Press 9 to clear all votes \n";
    while (1) {
        int userInput;

        std::cout << "Please vote: ";
        std::cin >> userInput;

        switch (userInput) {
            case 1:
            case 2:
            case 3:
            case 9:
                // std::cout << "userInput: " << userInput << "\n";
                tableController->HandleEvent(userInput);
                break;

            default:
                // std::cout << "userInput: " << userInput << "\n";
                std::cout << "Invalid user input!\n";
                break;
        }
    }
}
