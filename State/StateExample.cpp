#include <iostream>
#include <memory>

// Abstract State class
class State 
{
public:
    virtual ~State() {}
    virtual void handle() = 0;
};

// Concrete State classes
class ConcreteStateA : public State
{
public:
    void handle() override
    {
        std::cout << "Handling state A" << std::endl;
    }
};

class ConcreteStateB : public State
{
public:
    void handle() override
    {
        std::cout << "Handling state B" << std::endl;
    }
};

// Context class
class Context
{
private:
    std::unique_ptr<State> state;

public:
    void setState(std::unique_ptr<State> newState)
    {
        state = std::move(newState);
    }

    void request() 
    {
        if (state)
            state->handle();
        else
            std::cout << "No state set!" << std::endl;
    }
};

int main()
 {
    // Create context
    Context context;

    // Set initial state
    context.setState(std::make_unique<ConcreteStateA>());

    // Handling the state according to the current state
    context.request();

    // Change state
    context.setState(std::make_unique<ConcreteStateB>());

    // Call request again with the new state
    context.request();

    return 0;
}
