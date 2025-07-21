///////////////////////////////////////////////////////////
//  BarChartView.cpp
//  Implementation of the Class BarChartView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "BarChartView.h"

BarChartView::BarChartView() : View() {
    // Default constructor
    controller = nullptr;  // No controller for this view
    model = nullptr;       // No model for this view
}

BarChartView::BarChartView(Model* model) : View(model) {
    // Constructor with model parameter
    // This view does not create its own controller
    controller = nullptr;
}

BarChartView::~BarChartView() {
    // Destructor
}

void BarChartView::Draw() {
    // Implement the drawing logic for the bar chart view
    std::cout << "BAR CHART View displays:" << std::endl;

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
