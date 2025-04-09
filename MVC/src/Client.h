///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(CLIENT_H_)
#define CLIENT_H_

#include <iostream>

#include "BarChartView.h"
#include "Model.h"
#include "TableController.h"
#include "TableView.h"

class Client {
   public:
    Client();
    virtual ~Client();

    void Run();
};
#endif  // !defined(CLIENT_H_)
