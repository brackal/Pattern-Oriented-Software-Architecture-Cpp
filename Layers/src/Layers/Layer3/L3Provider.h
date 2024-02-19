///////////////////////////////////////////////////////////
//  L3Provider.h
//  Implementation of the Class L3Provider
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_631170C7_2B5B_49cc_8CD2_5DBD7A282C06__INCLUDED_)
#define EA_631170C7_2B5B_49cc_8CD2_5DBD7A282C06__INCLUDED_

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
#endif // !defined(EA_631170C7_2B5B_49cc_8CD2_5DBD7A282C06__INCLUDED_)
