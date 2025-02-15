/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 01:33:25 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/22 02:04:12 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat)
{
    *this = cat;
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
    std::cout << "WrongCat assignation operator called!" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meaw Meaw!" << std::endl;
}
