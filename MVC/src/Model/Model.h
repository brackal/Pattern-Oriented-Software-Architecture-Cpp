///////////////////////////////////////////////////////////
//  Model.h
//  Implementation of the Class Model
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(MODEL_H_)
#define MODEL_H_

#include <list>
#include <string>

#include "I_Observer.h"

class Model {
   public:
    Model();
    virtual ~Model();

    void Register(I_Observer* observer);
    void Unregister(I_Observer* observer);

    void AddVote(int vote, const std::string& party);
    void ClearVotes();

    std::list<int>::iterator GetBeginVotes();
    std::list<std::string>::iterator GetBeginParties();
    std::list<int>::iterator GetEndVotes();
    std::list<std::string>::iterator GetEndParties();

    // Add any other methods you need for the model

   private:
    std::list<I_Observer*> observerList;
    std::list<int> votesList;
    std::list<std::string> partiesList;

    void Notify();
};
#endif  // !defined(MODEL_H_)
