///////////////////////////////////////////////////////////
//  Controller.cpp
//  Implementation of the Class Controller
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Controller.h"

#include "View.h"  // Include the full definition of the View class

Controller::Controller() : model(nullptr), view(nullptr) {
    // Default constructor
}

Controller::Controller(View* view) : view(view), model(nullptr) {
    this->model = view->GetModel();
    this->model->Register(this);
}

Controller::~Controller() {
}

void Controller::Update() {
    // This method is called when the model notifies the observer (controller) of changes
    // You can implement any logic here if needed
    // For example, you might want to update the view based on the model's state
}