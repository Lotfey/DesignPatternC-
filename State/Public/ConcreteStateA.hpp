
#ifndef CONCRETE_STATE_A_HPP_
#define  CONCRETE_STATE_A_HPP_

#include"IState.hpp"

// Concrete State classes
class ConcreteStateA : public IState
{
public:
    /*
    * Default Constructor 
    */
    ConcreteStateA();

    /*
    * Handle the state
    */
    void handle() override;
    
    /*
    * Destructor
    */
    virtual ~ConcreteStateA(){};
    
};// Class
#endif // CONCRETE_STATE_A_HPP_
