///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      19-Feb-2024 15:44:50
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#include "Client.h"




Client::Client(){

}


Client::~Client(){

}


void Client::run(){

	transport.setLowerLayer(&dataLink);
	session.setLowerLayer(&transport);

	session.L3Service();

	while (true) {

	}
}