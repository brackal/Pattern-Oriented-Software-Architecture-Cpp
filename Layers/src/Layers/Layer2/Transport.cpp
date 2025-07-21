///////////////////////////////////////////////////////////
//  Transport.cpp
//  Implementation of the Class Transport
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Transport.h"




Transport::Transport(){

}


Transport::~Transport(){

}


void Transport::L2Service(){

	std::cout << std::endl;
	std::cout << "L2Service starting its job!" << std::endl;
	level1->L1Service();
	std::cout << "L2Service finishing its job!" << std::endl;
	std::cout << std::endl;
}