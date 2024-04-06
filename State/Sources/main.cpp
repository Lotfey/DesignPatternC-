
#include"StateContext.hpp"
#include"ConcreteStateA.hpp"
#include"ConcreteStateB.hpp"


int main()
 {
    // Create context
    StateContext context;

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