/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:41:25 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/22 01:33:11 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called!" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    *this = dog;
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog assignation operator called!" << std::endl;
    if (this != &dog)
    {
        this->type = dog.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Haw Haw!" << std::endl;
}
