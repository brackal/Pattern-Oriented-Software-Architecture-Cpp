///////////////////////////////////////////////////////////
//  Controller.h
//  Implementation of the Class Controller
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(CONTROLLER_H_)
#define CONTROLLER_H_

#include "ICB_Observer.h"
#include "Model.h"

class View;  // Forward declaration of View class

class Controller : public ICB_Observer {
   public:
    Controller();
    Controller(View* view);
    virtual ~Controller();

    virtual void Update();
    virtual void HandleEvent(int event) = 0;  // Pure virtual function to handle events

   protected:
    Model* model;
    View* view;
};
#endif  // !defined(CONTROLLER_H_)
