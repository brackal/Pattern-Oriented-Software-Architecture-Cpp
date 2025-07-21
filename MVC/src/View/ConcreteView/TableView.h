///////////////////////////////////////////////////////////
//  TableView.h
//  Implementation of the Class TableView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(TABLEVIEW_H_)
#define TABLEVIEW_H_

#include <iostream>

#include "TableController.h"
#include "View.h"

class TableView : public View {
   public:
    TableView();
    TableView(Model* model);
    virtual ~TableView();

   private:
    void Draw() override;  // Override the Draw method from the View class
};
#endif  // !defined(TABLEVIEW_H_)
