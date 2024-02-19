///////////////////////////////////////////////////////////
//  DataLink.h
//  Implementation of the Class DataLink
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_00FCAEE4_9D6E_4399_B4FA_770E8EE0F22C__INCLUDED_)
#define EA_00FCAEE4_9D6E_4399_B4FA_770E8EE0F22C__INCLUDED_

#include <iostream>

#include "L1Provider.h"

class DataLink : public L1Provider
{

public:
	DataLink();
	virtual ~DataLink();
	virtual void L1Service();

};
#endif // !defined(EA_00FCAEE4_9D6E_4399_B4FA_770E8EE0F22C__INCLUDED_)
