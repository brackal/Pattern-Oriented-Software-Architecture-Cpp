///////////////////////////////////////////////////////////
//  TableController.h
//  Implementation of the Class TableController
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(TABLECONTROLLER_H_)
#define TABLECONTROLLER_H_

#include "Controller.h"

class View;  // Forward declaration of View class

class TableController : public Controller {
   public:
    TableController();
    TableController(View* view);
    virtual ~TableController();

    virtual void Update() override;
    virtual void HandleEvent(int event) override;
};
#endif  // !defined(TABLECONTROLLER_H_)
