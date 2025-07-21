///////////////////////////////////////////////////////////
//  BarChartView.h
//  Implementation of the Class BarChartView
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(BARCHARTVIEW_H_)
#define BARCHARTVIEW_H_

#include <iostream>

#include "View.h"

class BarChartView : public View {
   public:
    BarChartView();
    BarChartView(Model* model);
    virtual ~BarChartView();

   private:
    void Draw() override;  // Override the Draw method from the View class
};
#endif  // !defined(BARCHARTVIEW_H_)
