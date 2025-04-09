///////////////////////////////////////////////////////////
//  View.cpp
//  Implementation of the Class View
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "View.h"

View::View() : model(nullptr), controller(nullptr) {
    // Default constructor
}

View::View(Model* model) : model(model), controller(nullptr) {
    //   Initialize the view with the model instance
    this->model->Register(this);  // Register the view as an observer of the model
}

View::~View() {
}

void View::Update() {
    this->Draw();  // Call the Draw method to update the view when notified by the model
    // This method is called when the model notifies the observer (view) of changes
}

// void View::SetController(Controller* controller) {
//     this->controller = controller;  // Set the controller instance
// }

Model* View::GetModel() {
    return model;  // Return the model instance
}

Controller* View::GetController() {
    return controller;  // Return the controller instance
}
