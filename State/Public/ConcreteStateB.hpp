
#ifndef CONCRETE_STATE_B_HPP_
#define  CONCRETE_STATE_B_HPP_

#include"IState.hpp"

// Concrete State classes
class ConcreteStateB : public IState
{
public:
    /*
    * Default Constructor 
    */
    ConcreteStateB();

    /*
    * Handle the state
    */
    void handle() override;
    
    /*
    * Destructor
    */
    virtual ~ConcreteStateB(){};
    
};// Class
#endif // CONCRETE_STATE_B_HPP_
