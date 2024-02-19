///////////////////////////////////////////////////////////
//  L1Provider.h
//  Implementation of the Interface L1Provider
//  Created on:      19-Feb-2024 15:28:36
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_20E60790_A421_49d7_98B5_2B71BB7A2020__INCLUDED_)
#define EA_20E60790_A421_49d7_98B5_2B71BB7A2020__INCLUDED_

class L1Provider
{

public:
	L1Provider() {

	}

	virtual ~L1Provider() {

	}

	virtual void L1Service() =0;

};
#endif // !defined(EA_20E60790_A421_49d7_98B5_2B71BB7A2020__INCLUDED_)
