///////////////////////////////////////////////////////////
//  BarChartView.cpp
//  Implementation of the Class BarChartView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "BarChartView.h"

BarChartView::BarChartView() : View() {
    // Default constructor
}

BarChartView::BarChartView(Model* model) : View(model) {
    // Constructor with model parameter
}

BarChartView::~BarChartView() {
    // Destructor
}

void BarChartView::Draw() {
    // Implement the drawing logic for the bar chart view
    std::cout << "Drawing Bar Chart View" << std::endl;

    if (model != nullptr) {
        // Example of accessing model data
        const auto votesBegin = model->GetBeginVotes();
        const auto votesEnd = model->GetEndVotes();
        const auto partiesBegin = model->GetBeginParties();

        auto voteIt = votesBegin;
        auto partyIt = partiesBegin;

        while (voteIt != votesEnd) {
            std::cout << *partyIt << ": " << *voteIt << std::endl;
            ++voteIt;
            ++partyIt;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Model is not set." << std::endl;
    }
}
