///////////////////////////////////////////////////////////
//  Session.cpp
//  Implementation of the Class Session
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Session.h"




Session::Session(){

}


Session::~Session(){

}


void Session::L3Service(){

	std::cout << "L3Service starting its job!" << std::endl;
	level2->L2Service();
	std::cout << "L3Service finishing its job!" << std::endl;
}