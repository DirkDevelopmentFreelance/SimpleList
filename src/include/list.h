#include <iostream>
#include <vector>

class List {
    private:
    //onlt the class itself
    protected:
    //anything that inherits the class and class itself
    public:
    //anything including the class
    std::vector<std::string> list;
    std::string name;

    List() {
        //constructor
    }

    ~List() {
        //destructor
    }

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};