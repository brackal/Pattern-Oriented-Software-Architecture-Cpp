///////////////////////////////////////////////////////////
//  Model.cpp
//  Implementation of the Class Model
//  Created on:      07-Apr-2025 16:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Model.h"




Model::Model(){

}


Model::~Model(){

}

void Model::Register(I_Observer* observer) {
    observerList.push_back(observer);
}

void Model::Notify() {
    for (auto observer : observerList) {
        observer->Update();
    }
}

void Model::Unregister(I_Observer* observer) {
    observerList.remove(observer);
}