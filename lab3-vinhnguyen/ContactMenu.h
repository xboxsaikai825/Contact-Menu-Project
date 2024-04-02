#pragma once
#include "Menu.h"
class ContactMenu :
    public Menu
{
public:
    /* Default constructor
    * constructor to initialize attributes and reads csv
    */
    ContactMenu();

    /* Movement methods
    * methods to move to next or previous contact records
    */
    void move_first();
    
    void move_next();

    void move_previous();

    void move_last();
};

