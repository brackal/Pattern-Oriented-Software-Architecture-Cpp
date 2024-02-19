///////////////////////////////////////////////////////////
//  L3Provider.h
//  Implementation of the Class L3Provider
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_5A77C188_4ACF_4ef8_88F3_B126D1BC0066__INCLUDED_)
#define EA_5A77C188_4ACF_4ef8_88F3_B126D1BC0066__INCLUDED_

#include "L2Provider.h"

class L3Provider
{

public:
	L3Provider();
	virtual ~L3Provider();
	virtual void L3Service() =0;
	void setLowerLayer(L2Provider* l2);

protected:
	L2Provider* level2;

};
#endif // !defined(EA_5A77C188_4ACF_4ef8_88F3_B126D1BC0066__INCLUDED_)
