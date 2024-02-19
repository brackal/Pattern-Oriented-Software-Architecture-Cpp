///////////////////////////////////////////////////////////
//  L2Provider.h
//  Implementation of the Class L2Provider
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_285E7652_8143_4d9f_8456_D3F87894034F__INCLUDED_)
#define EA_285E7652_8143_4d9f_8456_D3F87894034F__INCLUDED_

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
#endif // !defined(EA_285E7652_8143_4d9f_8456_D3F87894034F__INCLUDED_)
