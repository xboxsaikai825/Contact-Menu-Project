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
    void sort();

    /* Search method
    * method to search for a contact
    */
    void search(string);
};

