///////////////////////////////////////////////////////////
//  L2Provider.h
//  Implementation of the Class L2Provider
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_85D04C5C_1653_4b6b_953F_EC6F205490E3__INCLUDED_)
#define EA_85D04C5C_1653_4b6b_953F_EC6F205490E3__INCLUDED_

#include "L1Provider.h"

class L2Provider
{

public:
	L2Provider();
	virtual ~L2Provider();

	virtual void L2Service() =0;
	void setLowerLayer(L1Provider* l1);

protected:
	L1Provider* level1;

};
#endif // !defined(EA_85D04C5C_1653_4b6b_953F_EC6F205490E3__INCLUDED_)
