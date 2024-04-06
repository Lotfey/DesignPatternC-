#ifndef I_CONTEXT_HPP_
#define  I_CONTEXT_HPP_

#include <memory>
#include <iostream>

#include <IState.hpp>

// Abstract State class
class IContext
{
public:
    virtual void setState(std::unique_ptr<IState> NewState) = 0;
    virtual void request() = 0;
    virtual ~IContext(){};

}; // Class
#endif // I_CONTEXT_HPP_