///////////////////////////////////////////////////////////
//  Model.h
//  Implementation of the Class Model
//  Created on:      07-Apr-2025 16:49:01
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(MODEL_H_)
#define MODEL_H_

#include <list>
#include "I_Observer.h"

class Model
{

public:
	Model();
	virtual ~Model();

	void Register(I_Observer* observer);
	void Unregister(I_Observer* observer);
	void Notify();

private:
	std::list<I_Observer*> observerList;
};
#endif // !defined(MODEL_H_)
