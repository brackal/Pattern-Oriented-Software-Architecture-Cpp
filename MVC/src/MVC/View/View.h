///////////////////////////////////////////////////////////
//  View.h
//  Implementation of the Class View
//  Created on:      07-Apr-2025 16:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(VIEW_H_)
#define VIEW_H_

#include "I_Observer.h"

class View : public I_Observer
{

public:
	View();
	virtual ~View();
	virtual void Update();

};
#endif // !defined(VIEW_H_)
