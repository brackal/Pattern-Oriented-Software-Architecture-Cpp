///////////////////////////////////////////////////////////
//  L3Provider.cpp
//  Implementation of the Class L3Provider
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "L3Provider.h"




L3Provider::L3Provider(){

}


L3Provider::~L3Provider(){

}


void L3Provider::setLowerLayer(L2Provider* l2){

	level2 = l2;
}