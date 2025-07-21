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
    // get the controller from the table view to handle events in the main loop
    Controller* tableController = tableView.GetController();

    std::cout << "Press 1 to vote for 'Party A'\n";
    std::cout << "Press 2 to vote for 'Party B'\n";
    std::cout << "Press 3 to vote for 'Party C'\n";
    std::cout << "Press 9 to clear all votes \n";

    char userInput;
    int event;
    while (1) {
        std::cout << "Please vote: ";
        std::cin >> userInput;
        event = (int)userInput - 48;

        switch (event) {
            case 1:
            case 2:
            case 3:
            case 9:
                tableController->HandleEvent(event);
                break;

            default:
                std::cout << "Invalid user input!\n";
                break;
        }
    }
}
