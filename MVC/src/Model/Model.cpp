///////////////////////////////////////////////////////////
//  Model.cpp
//  Implementation of the Class Model
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Model.h"

Model::Model() {
    partiesListPairs.push_back(std::make_pair(0, "Party A"));
    partiesListPairs.push_back(std::make_pair(0, "Party B"));
    partiesListPairs.push_back(std::make_pair(0, "Party C"));
}

Model::~Model() {
}

/**
 * @brief Registers an observer to the model.
 *
 * This function adds the given observer to the list of observers
 * that will be notified of changes in the model's state.
 *
 * @param observer A pointer to an object implementing the ICB_Observer interface.
 */
void Model::Register(ICB_Observer* observer) {
    observerList.push_back(observer);
}

void Model::Unregister(ICB_Observer* observer) {
    observerList.remove(observer);
}

/**
 * @brief Notifies all registered observers about a change in the model.
 *
 * This method iterates through the list of observers and calls their
 * Update() method to inform them of any changes in the model's state.
 */
void Model::Notify() {
    for (auto observer : observerList) {
        observer->Update();
    }
}

void Model::AddVote(int vote, const std::string& party) {
    // Check if the party already exists in the partiesListPairs
    for (auto& pair : partiesListPairs) {
        if (pair.second == party) {
            pair.first = pair.first + vote;
            Notify();
            return;
        }
    }
}

void Model::ClearVotes() {
    for (auto& pair : partiesListPairs) {
        pair.first = 0;
    }
    Notify();
}

std::list<std::pair<int, std::string>>::iterator Model::GetBeginParties() {
    return partiesListPairs.begin();
}

std::list<std::pair<int, std::string>>::iterator Model::GetEndParties() {
    return partiesListPairs.end();
}