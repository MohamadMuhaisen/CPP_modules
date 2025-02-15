/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 21:58:36 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/19 10:42:17 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap")
{
    _hp = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hp = 100;
    _energy = 50;
    _damage = 20;
    std::cout << "ScavTrap Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energy > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _damage << " damage!" << std::endl;
        _energy--;
    }
    else
    {
        std::cout << _name << " has no energy left to attack!" << std::endl;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}