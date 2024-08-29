#include "include/list.h"

void List::print_menu() {
    int choice;

    std::cout << "\n\n\n\n";
    std::cout << "*************************\n";
    std::cout << "1 - Print list.\n";
    std::cout << "2 - Add to list.\n";
    std::cout << "3 - Delete from list.\n";
    std::cout << "4 - Quit.\n";
    std::cout << "Enter your choice and press return/enter.\n";

    std::cin >> choice;

    switch(choice){
        case 1: print_list();
                break;
        case 2: add_item();
                break;
        case 3: delete_item();
                break;
        case 4: exit(0);
                break;
        default: std::cout << "Sorry choice has not been implemented.\n";
    }
}

void List::print_list() {
    if (list.size()) {
        std::cout << "\n\n\n";
        std::cout << "*** Printing List ***\n";

        for (unsigned int i=0; i < list.size(); i++) {
            std::cout << i << ": " << list[i] << std::endl;
        }
        
        std::cout << "M - Menu\n";
        char choice;
        std::cin >> choice;

        if (choice == 'M' || choice == 'm') {
            print_menu();
        } else {
            std::cout << "Invalid Choice. Quitting..\n";
        }

    } else {
        std::cout << "Nothing in the list to display.\n\n\n";
    }
}

void List::add_item() {
    std::cout << "\n\n\n\n\n";
    std::cout << "*** Add Item ***\n";
    std::cout << "Type in an item and press enter: ";

    std::string item;
    std::cin >> item;

    list.push_back(item);

    std::cout << "Successfully added an item to the list \n\n\n";
    std::cin.clear();

    print_menu();
}

void List::delete_item() {
    std::cout << "*** Delete Item ***\n";
    std::cout << "Select an item index number to delete\n";

    if (list.size()) {
        for(unsigned int i = 0; i < list.size(); i++) {
            std::cout << i << ": " << list[i] << std::endl;
        }
        int choiceNum;
        std::cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
    } else {
        std::cout << "No items in the list to delete.\n\n\n";
    }

    print_menu();
}