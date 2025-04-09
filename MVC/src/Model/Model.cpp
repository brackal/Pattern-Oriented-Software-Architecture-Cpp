///////////////////////////////////////////////////////////
//  Model.cpp
//  Implementation of the Class Model
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Model.h"

Model::Model() {
}

Model::~Model() {
}

void Model::Register(I_Observer* observer) {
    observerList.push_back(observer);
}

void Model::Unregister(I_Observer* observer) {
    observerList.remove(observer);
}

void Model::Notify() {
    for (auto observer : observerList) {
        observer->Update();
    }
}

void Model::AddVote(int vote, const std::string& party) {
    // todo must be optimized
    votesList.push_back(vote);
    partiesList.push_back(party);
    Notify();
}

void Model::ClearVotes() {
    votesList.clear();
    partiesList.clear();
    Notify();
}

std::list<int>::iterator Model::GetBeginVotes() {
    return votesList.begin();
}

std::list<std::string>::iterator Model::GetBeginParties() {
    return partiesList.begin();
}

std::list<int>::iterator Model::GetEndVotes() {
    return votesList.end();
}

std::list<std::string>::iterator Model::GetEndParties() {
    return partiesList.end();
}