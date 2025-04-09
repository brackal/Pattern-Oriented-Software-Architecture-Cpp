///////////////////////////////////////////////////////////
//  View.h
//  Implementation of the Class View
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(VIEW_H_)
#define VIEW_H_

#include "Controller.h"
#include "I_Observer.h"
#include "Model.h"

class View : public I_Observer {
   public:
    View();
    View(Model* model);
    virtual ~View();
    virtual void Update();

    virtual void Draw() = 0;  // Pure virtual function to be implemented by derived classes
    // void SetController(Controller* controller);
    Model* GetModel();
    Controller* GetController();

   protected:
    Controller* controller;
    Model* model;
};
#endif  // !defined(VIEW_H_)
