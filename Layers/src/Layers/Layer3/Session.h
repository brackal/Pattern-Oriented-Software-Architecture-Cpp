///////////////////////////////////////////////////////////
//  Session.h
//  Implementation of the Class Session
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_C36802EB_F786_4541_BA9E_F6424CBE17A9__INCLUDED_)
#define EA_C36802EB_F786_4541_BA9E_F6424CBE17A9__INCLUDED_

#include <iostream>

#include "L3Provider.h"

class Session : public L3Provider
{

public:
	Session();
	virtual ~Session();

	virtual void L3Service();

};
#endif // !defined(EA_C36802EB_F786_4541_BA9E_F6424CBE17A9__INCLUDED_)
