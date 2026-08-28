#pragma once
#include <string>
#include <iostream>

class Toggle {
private:
    std::string name;
    bool state;

public:
    Toggle(std::string toggleName, bool initialState = false) 
        : name(toggleName), state(initialState) {}

    // Flip the state (like clicking an Apple settings toggle)
    void toggle() {
        state = !state;
        std::cout << "[Toggle] '" << name << "' switched to: " 
                  << (state ? "ON (Green)" : "OFF (Gray)") << std::endl;
    }

    // Getters and Setters
    bool getState() const { return state; }
    std::string getName() const { return name; }
    
    void setState(bool newState) {
        state = newState;
    }
};
