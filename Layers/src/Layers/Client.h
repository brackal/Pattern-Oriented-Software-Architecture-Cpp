///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_B665AE3C_9575_4b3d_96D9_530E73FE6D40__INCLUDED_)
#define EA_B665AE3C_9575_4b3d_96D9_530E73FE6D40__INCLUDED_

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
#endif // !defined(EA_B665AE3C_9575_4b3d_96D9_530E73FE6D40__INCLUDED_)
