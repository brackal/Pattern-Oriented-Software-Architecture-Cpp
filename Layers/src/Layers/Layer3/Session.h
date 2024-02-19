///////////////////////////////////////////////////////////
//  Session.h
//  Implementation of the Class Session
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_0ED8FF19_BB86_4c5b_A254_44BE67FA8522__INCLUDED_)
#define EA_0ED8FF19_BB86_4c5b_A254_44BE67FA8522__INCLUDED_

#include <iostream>

#include "L3Provider.h"

class Session : public L3Provider
{

public:
	Session();
	virtual ~Session();
	virtual void L3Service();

};
#endif // !defined(EA_0ED8FF19_BB86_4c5b_A254_44BE67FA8522__INCLUDED_)
