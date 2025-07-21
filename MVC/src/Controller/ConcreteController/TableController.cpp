///////////////////////////////////////////////////////////
//  TableController.cpp
//  Implementation of the Class TableController
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "TableController.h"

#include "View.h"

TableController::TableController() : Controller() {
    // Default constructor
}

TableController::TableController(View* view) : Controller(view) {
    this->model = view->GetModel();
    // this->model->Register(this);
}

TableController::~TableController() {
}

void TableController::Update() {
    // This method is called when the model notifies the observer (controller) of changes
    // You can implement any logic here if needed
    // For example, you might want to update the view based on the model's state
}

void TableController::HandleEvent(int event) {
    // Handle the event based on the event type
    // For example, you can add a vote or clear votes based on the event
    switch (event) {
        case 1:
            model->AddVote(1, "Party A");
            break;

        case 2:
            model->AddVote(1, "Party B");
            break;

        case 3:
            model->AddVote(1, "Party C");
            break;

        case 9:
            model->ClearVotes();
            break;

        default:
            break;
    }
}
