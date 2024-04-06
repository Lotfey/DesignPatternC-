#ifndef STATE_CONTEXT_HPP_
#define  STATE_CONTEXT_HPP_

#include"IContext.hpp"
#include"IState.hpp"

class StateContext : public IContext
{
private:
    /* data */
    std::unique_ptr<IState> mNewState;
public:
    StateContext();  

    void setState(std::unique_ptr<IState> newState) override;
    void request() override;
    virtual ~StateContext(){mNewState = nullptr; }
};// Class
#endif //STATE_CONTEXT_HPP_
