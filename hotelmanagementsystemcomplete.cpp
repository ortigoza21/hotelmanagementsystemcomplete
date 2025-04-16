#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::find

// Define the HotelManagementSystem class
class HotelManagementSystem {
private:
    std::vector<std::string> guests;  // Store guest names in a vector

public:
    // Display menu options
    void displayMenu() {
        std::cout << "1. Add Guest\n2. Remove Guest\n3. View Guests\n4. Exit\n";
    }

    // Add a guest to the list
    void addGuest() {
        std::string name;
        std::cout << "Enter the name of the guest: ";
        std::getline(std::cin, name);
        guests.push_back(name);
        std::cout << "Guest " << name << " has been added.\n";
    }

    // Remove a guest from the list
    void removeGuest() {
        std::string name;
        std::cout << "Enter the name of the guest to remove: ";
        std::getline(std::cin, name);

        auto it = std::find(guests.begin(), guests.end(), name);
        if (it != guests.end()) {
            guests.erase(it);
            std::cout << "Guest " << name << " has been removed.\n";
        } else {
            std::cout << "Guest not found.\n";
        }
    }

    // View all guests in the list
    void viewGuests() {
        if (guests.empty()) {
            std::cout << "No guests in the system.\n";
        } else {
            std::cout << "List of guests:\n";
            for (const auto& guest : guests) {
                std::cout << guest << std::endl;
            }
        }
    }
};

int main() {
    HotelManagementSystem system;
    int choice;

    do {
        system.displayMenu();
        std::cin >> choice;
        std::cin.ignore();  // Ignore the leftover newline character after reading the choice

        switch (choice) {
            case 1:
                system.addGuest();
                break;
            case 2:
                system.removeGuest();
                break;
            case 3:
                system.viewGuests();
                break;
            case 4:
                std::cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
