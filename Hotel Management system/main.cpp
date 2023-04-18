#include <iostream>
#include <string>

void add_room(int room_number, double price, bool available) {
    // implementation here
}

void modify_room(int room_number, double price) {
    // implementation here
}

void delete_room(int room_number) {
    // implementation here
}

void make_reservation(std::string name, int room_number, int start_day, int end_day) {
    // implementation here
}

void display_rooms() {
    // implementation here
}

void display_reservations() {
    // implementation here
}

int main() {
    int choice;
    while (true) {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Add room" << std::endl;
        std::cout << "2. Modify room price" << std::endl;
        std::cout << "3. Delete room" << std::endl;
        std::cout << "4. Make reservation" << std::endl;
        std::cout << "5. Display rooms" << std::endl;
        std::cout << "6. Display reservations" << std::endl;
        std::cout << "7. Quit" << std::endl;
        std::cout << "Enter your choice (1-7): ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int room_number;
                double price;
                bool available;
                std::cout << "Enter room number: ";
                std::cin >> room_number;
                std::cout << "Enter price: ";
                std::cin >> price;
                std::cout << "Enter availability (1 for available, 0 for not available): ";
                std::cin >> available;
                add_room(room_number, price, available);
                break;
            }
            case 2: {
                int room_number;
                double price;
                std::cout << "Enter room number: ";
                std::cin >> room_number;
                std::cout << "Enter new price: ";
                std::cin >> price;
                modify_room(room_number, price);
                break;
            }
            case 3: {
                int room_number;
                std::cout << "Enter room number: ";
                std::cin >> room_number;
                delete_room(room_number);
                break;
            }
            case 4: {
                std::string name;
                int room_number, start_day, end_day;
                std::cout << "Enter name: ";
                std::cin >> name;
                std::cout << "Enter room number: ";
                std::cin >> room_number;
                std::cout << "Enter start day: ";
                std::cin >> start_day;
                std::cout << "Enter end day: ";
                std::cin >> end_day;
                make_reservation(name, room_number, start_day, end_day);
                break;
            }
            case 5: {
                display_rooms();
                break;
            }
            case 6: {
                display_reservations();
                break;{}
          }
               }


