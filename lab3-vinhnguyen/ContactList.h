#pragma once
#include "LinkedList.h"
#include "Contact.h"


class ContactList :
    public LinkedList<Contact>
{
public:
    /* Constructor
    * constructor to initialize LinkedList
    */
    ContactList();

    /* Sort method
    * method to sort list using selection sort
    */
    void sort(bool);

    /* Search method
    * method to search for a contact
    */
    Contact search(string);

    /* Movement methods
    * methods to move to next or previous contact records
    */
    void move_first();

    void move_next();

    void move_previous();

    void move_last();

private:
    Iterator<Contact> iter;
};

