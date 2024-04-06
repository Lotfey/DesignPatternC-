
#ifndef I_STATE_HPP_
#define  I_STATE_HPP_

#include <memory>
#include <iostream>

// Abstract State class
class IState 
{
public:
    virtual ~IState() {}
    virtual void handle() = 0;
};// class

#endif //I_STATE_HPP_
