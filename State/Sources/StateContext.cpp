
#include"StateContext.hpp"


StateContext::StateContext()
{
    mNewState=nullptr;
};

void StateContext::setState(std::unique_ptr<IState> newState)
{
    mNewState = std::move(newState);
}

void StateContext::request()
{
    if (mNewState)
    {
        mNewState->handle();
    }
    else
    {
        std::cout << "No state set!" << std::endl;
    }

}

