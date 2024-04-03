#pragma once
#include "Menu.h"
#include "ContactList.h"

class ContactMenu :
    public Menu
{
public:
    /* Default constructor
    * constructor to initialize attributes and reads csv
    */
    ContactMenu();

    void get_input();

    /* List method
    * method to show all contacts 
    */
    void doList();

    /* View method
    * method to view a contact's details
    */
    void doView();

    /* Add method
    * method to add contact
    */
    void doAdd();

    /* Edit method
    * method to edit contact
    */
    void doEdit();

    /* Delete method
    * method to delete contact
    */
    void doDelete();

    /* Exit method
    * method to exit program
    */
    void doExit();

private:
    ContactList list;

    /* Read and Write methods
    * methods to read and write to csv
    */
    void read_csv();

    void write_csv();
};

