/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 02:11:46 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/19 12:01:45 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hp = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << _name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hp = 100;
    _energy = 100;
    _damage = 30;
    std::cout << "FragTrap " << _name << " parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft)
{
    std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
    ClapTrap::operator=(ft);
    std::cout << "FragTrap " << _name << " assignation operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destructed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
