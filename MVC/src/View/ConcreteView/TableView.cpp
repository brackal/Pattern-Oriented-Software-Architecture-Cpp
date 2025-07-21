///////////////////////////////////////////////////////////
//  TableView.cpp
//  Implementation of the Class TableView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "TableView.h"

TableView::TableView() : View() {
    // Default constructor
    controller = nullptr;
    model = nullptr;
}

TableView::TableView(Model* model) : View(model) {
    // Constructor with model parameter
    // Concrete view creates its own controller
    controller = new TableController(this);  // Create a new controller instance
}

TableView::~TableView() {
    // Destructor
}

void TableView::Draw() {
    // Implement the drawing logic for the table view
    std::cout << "TABLE VIEW displays:" << std::endl;

    if (model != nullptr) {
        // Example of accessing model data
        auto partiesPairsIt = model->GetBeginParties();
        const auto partiesPairsEnd = model->GetEndParties();

        while (partiesPairsIt != partiesPairsEnd) {
            std::cout << partiesPairsIt->second << ": " << partiesPairsIt->first << std::endl;
            ++partiesPairsIt;
        }

        std::cout << std::endl;
    } else {
        std::cout << "Model is not set." << std::endl;
    }
}
