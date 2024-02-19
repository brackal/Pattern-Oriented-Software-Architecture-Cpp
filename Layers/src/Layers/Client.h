///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      19-Feb-2024 15:44:50
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_E1B5B088_2BAC_452e_8F0C_9E8F75F08617__INCLUDED_)
#define EA_E1B5B088_2BAC_452e_8F0C_9E8F75F08617__INCLUDED_

#include "DataLink.h"
#include "Transport.h"
#include "Session.h"

class Client
{

public:
	Client();
	virtual ~Client();
	void run();

private:
	DataLink dataLink;
	Transport transport;
	Session session;

};
#endif // !defined(EA_E1B5B088_2BAC_452e_8F0C_9E8F75F08617__INCLUDED_)
