///////////////////////////////////////////////////////////
//  L1Provider.h
//  Implementation of the Interface L1Provider
//  Created on:      19-Feb-2024 15:44:51
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(EA_2EBF70CA_886B_41ae_9BF0_C2E2FB113FD0__INCLUDED_)
#define EA_2EBF70CA_886B_41ae_9BF0_C2E2FB113FD0__INCLUDED_

class L1Provider
{

public:
	L1Provider(){

	}
	virtual ~L1Provider(){

	}
	virtual void L1Service() = 0;

};
#endif // !defined(EA_2EBF70CA_886B_41ae_9BF0_C2E2FB113FD0__INCLUDED_)
