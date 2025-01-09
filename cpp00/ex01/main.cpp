/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 00:04:00 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/09 22:11:55 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
    PhoneBook phoneBook;
	std::string command;
    
	while (true)
	{
		std::cout << "Type ADD to save a new contact, SEARCH to search for a contact or EXIT to exit the program" << std::endl;
		std::cout << "Enter a command: ";
		if (!std::getline(std::cin, command))
            return (1);
		if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            break ;
        else
            std::cout << "Invalid command!" << std::endl;
	}
	
}
