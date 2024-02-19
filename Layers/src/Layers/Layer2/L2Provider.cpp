///////////////////////////////////////////////////////////
//  L2Provider.cpp
//  Implementation of the Class L2Provider
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "L2Provider.h"




L2Provider::L2Provider(){

}


L2Provider::~L2Provider(){

}


void L2Provider::setLowerLayer(L1Provider* l1){

	level1 = l1;
}