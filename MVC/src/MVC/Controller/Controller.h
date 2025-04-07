///////////////////////////////////////////////////////////
//  Controller.h
//  Implementation of the Class Controller
//  Created on:      07-Apr-2025 16:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(CONTROLLER_H_)
#define CONTROLLER_H_

#include "I_Observer.h"

class Controller : public I_Observer
{

public:
	Controller();
	virtual ~Controller();
	virtual void Update();

};
#endif // !defined(CONTROLLER_H_)
