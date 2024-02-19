///////////////////////////////////////////////////////////
//  Transport.h
//  Implementation of the Class Transport
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_501ECC16_A20A_4482_A89B_15857C3605B2__INCLUDED_)
#define EA_501ECC16_A20A_4482_A89B_15857C3605B2__INCLUDED_

#include <iostream>

#include "L2Provider.h"

class Transport : public L2Provider
{

public:
	Transport();
	virtual ~Transport();

	virtual void L2Service();

};
#endif // !defined(EA_501ECC16_A20A_4482_A89B_15857C3605B2__INCLUDED_)
