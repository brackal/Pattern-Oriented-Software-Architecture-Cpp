///////////////////////////////////////////////////////////
//  I_Observer.h
//  Implementation of the Interface I_Observer
//  Original author: aleksej.brack
///////////////////////////////////////////////////////////

#if !defined(I_OBSERVER_H_)
#define I_OBSERVER_H_

class I_Observer {
   public:
    I_Observer() {
    }

    virtual ~I_Observer() {
    }

    virtual void Update() = 0;
};
#endif  // !defined(I_OBSERVER_H_)
