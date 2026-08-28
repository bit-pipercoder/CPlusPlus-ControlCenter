#include <iostream>
#include "Toggle.hpp"

int main() {
    std::cout << "--- Initializing Toggle State Manager ---" << std::endl;

    // Create a couple of settings toggles like an iOS menu
    Toggle wifi("Wi-Fi", false);
    Toggle bluetooth("Bluetooth", true);

    // Simulate clicking/tapping them
    std::cout << "\nSimulating user interactions..." << std::endl;
    
    wifi.toggle();       // Turns Wi-Fi ON
    bluetooth.toggle();  // Turns Bluetooth OFF
    
    wifi.toggle();       // Turns Wi-Fi back OFF

    std::cout << "\nFinal States:" << std::endl;
    std::cout << wifi.getName() << " is " << (wifi.getState() ? "ON" : "OFF") << std::endl;
    std::cout << bluetooth.getName() << " is " << (bluetooth.getState() ? "ON" : "OFF") << std::endl;

    return 0;
}
