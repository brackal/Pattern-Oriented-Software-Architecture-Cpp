///////////////////////////////////////////////////////////
//  ICB_Observer.h
//  Implementation of the Callback Interface ICB_Observer
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(ICB_OBSERVER_H_)
#define ICB_OBSERVER_H_

class ICB_Observer {
   public:
    ICB_Observer() {
    }

    virtual ~ICB_Observer() {
    }

    virtual void Update() = 0;
};
#endif  // !defined(ICB_OBSERVER_H_)
