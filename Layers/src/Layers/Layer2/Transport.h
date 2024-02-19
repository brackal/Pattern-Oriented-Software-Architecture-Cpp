///////////////////////////////////////////////////////////
//  Transport.h
//  Implementation of the Class Transport
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_1AB21D9E_F40D_4dd2_BD92_91CA47025E75__INCLUDED_)
#define EA_1AB21D9E_F40D_4dd2_BD92_91CA47025E75__INCLUDED_

#include <iostream>

#include "L2Provider.h"

class Transport : public L2Provider
{

public:
	Transport();
	virtual ~Transport();
	virtual void L2Service();

};
#endif // !defined(EA_1AB21D9E_F40D_4dd2_BD92_91CA47025E75__INCLUDED_)
