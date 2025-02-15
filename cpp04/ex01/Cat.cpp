/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 01:33:25 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/22 13:51:50 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    *this = cat;
    this->_brain = new Brain();
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called!" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
        // delete this->_brain;
        this->_brain = new Brain();
    }
    return *this;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meaw Meaw!" << std::endl;
}
