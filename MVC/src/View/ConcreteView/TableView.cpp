///////////////////////////////////////////////////////////
//  TableView.cpp
//  Implementation of the Class TableView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "TableView.h"

TableView::TableView() : View() {
    // Default constructor
}

TableView::TableView(Model* model) : View(model) {
    // Constructor with model parameter
    controller = new TableController(this);  // Create a new controller instance
}

TableView::~TableView() {
    // Destructor
}

void TableView::Draw() {
    // Implement the drawing logic for the table view
    std::cout << "Drawing Table View" << std::endl;

    if (model != nullptr) {
        // Example of accessing model data
        const auto votes = model->GetBeginVotes();
        const auto parties = model->GetBeginParties();

        auto voteIt = votes;
        auto partyIt = parties;

        while (voteIt != model->GetEndVotes() && partyIt != model->GetEndParties()) {
            std::cout << *partyIt << ": " << *voteIt << std::endl;
            ++voteIt;
            ++partyIt;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Model is not set." << std::endl;
    }
}
