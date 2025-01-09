/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 04:25:25 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/09 21:58:53 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    currentIndex = 0;
    totalContacts = 0;
}

void PhoneBook::addContact()
{
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter Last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);
    
    if (newContact.isEmpty()) {
        std::cout << "Error: All fields are required!" << std::endl;
        return ;
    }

    contacts[currentIndex] = newContact;
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;
    std::cout << "Contact added successfully" << std::endl;
}

void PhoneBook::searchContact() const
{
    if (totalContacts == 0)
    {
        std::cout << "No contacts" << std::endl;
        return ;
    }
    printHeader();
    for (int i = 0; i < totalContacts; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        printTruncated(contacts[i].getFirstName());
        printTruncated(contacts[i].getLastName());
        printTruncated(contacts[i].getNickname());
        std::cout << std::endl;
    }
    
    int index;
    std::cout << "Enter the index of the contact to view: ";
    std::cin >> index;
    std::cin.ignore();
    if (index < 1 || index > totalContacts)
        std::cout << "Invalid index!" << std::endl;
    else
        displayContact(index - 1);
}

void PhoneBook::displayContact(int index) const {
    const Contact &contact = contacts[index];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::printHeader() const {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;
}

void PhoneBook::printTruncated(std::string str) const {
    if (str.length() > 10)
        std::cout << std::setw(10) << str.substr(0, 9) + ".";
    else
        std::cout << std::setw(10) << str;
    std::cout << "|";
}
