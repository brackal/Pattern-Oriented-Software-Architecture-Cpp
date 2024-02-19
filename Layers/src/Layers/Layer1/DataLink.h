///////////////////////////////////////////////////////////
//  DataLink.h
//  Implementation of the Class DataLink
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_D9F587F7_26E4_49d1_9A69_48AE80D06865__INCLUDED_)
#define EA_D9F587F7_26E4_49d1_9A69_48AE80D06865__INCLUDED_

#include <iostream>

#include "L1Provider.h"

class DataLink : public L1Provider
{

public:
	DataLink();
	virtual ~DataLink();

	virtual void L1Service();

};
#endif // !defined(EA_D9F587F7_26E4_49d1_9A69_48AE80D06865__INCLUDED_)
