# hotelmanagementsystemcomplete

![Code_NKE2G10lex](https://github.com/user-attachments/assets/dc963f1e-f34e-4d48-9621-e69de3015009)
![Code_QeEKj1wB86](https://github.com/user-attachments/assets/61105373-3326-4919-b1a6-270cef899d25)
![Code_oV9YB1pEUr](https://github.com/user-attachments/assets/134f1ddc-3fe0-4fb5-bf8e-6448d04d6919)
![Code_xMTAgs14u6](https://github.com/user-attachments/assets/3579b017-4088-438d-9cd7-5057f504ad11)
![Code_sx0V31cCwL](https://github.com/user-attachments/assets/e990daf7-78f8-4c20-a5ef-118cea68bfd0)
![Code_nmA5nyrYtY](https://github.com/user-attachments/assets/560a75f3-ae7e-4796-8c90-37e009f60759)
![4GHNU3tBbr](https://github.com/user-attachments/assets/d7b5eb91-eb62-4d85-8125-89cdb0f4c592)

#include <iostream>

// Define the HotelManagementSystem class
class HotelManagementSystem {
public:
    void displayMenu() {
        std::cout << "1. Add Guest\n2. Remove Guest\n3. View Guests\n4. Exit\n";
    }
    void addGuest() {
        std::cout << "Adding a guest...\n";
    }
    void removeGuest() {
        std::cout << "Removing a guest...\n";
    }
    void viewGuests() {
        std::cout << "Viewing guests...\n";
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
