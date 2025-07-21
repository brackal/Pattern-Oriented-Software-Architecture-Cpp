///////////////////////////////////////////////////////////
//  Model.h
//  Implementation of the Class Model
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(MODEL_H_)
#define MODEL_H_

#include <list>
#include <string>

#include "ICB_Observer.h"

class Model {
   public:
    Model();
    virtual ~Model();

    void Register(ICB_Observer* observer);
    void Unregister(ICB_Observer* observer);

    void AddVote(int vote, const std::string& party);
    void ClearVotes();

    std::list<std::pair<int, std::string>>::iterator Model::GetBeginParties();
    std::list<std::pair<int, std::string>>::iterator Model::GetEndParties();

    // Add any other methods you need for the model

   private:
    std::list<ICB_Observer*> observerList;
    std::list<std::pair<int, std::string>> partiesListPairs;

    void Notify();
};
#endif  // !defined(MODEL_H_)
