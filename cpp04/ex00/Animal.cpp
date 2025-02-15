/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 23:33:40 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/22 00:35:54 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default type")
{
    std::cout << "Default Animal constructor called!" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal parameterized constructor called!" << std::endl;
}

Animal::Animal(const Animal &animal) : type(animal.type)
{
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal copy assignment operator called!" << std::endl;
    if (this != &animal)
    {
        type = animal.type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "HOHOHO!" << std::endl;
}
