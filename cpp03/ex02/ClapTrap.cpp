/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:40:28 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/19 02:31:33 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hp(10), _energy(10), _damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct) : _name(ct._name), _hp(ct._hp), _energy(ct._energy), _damage(ct._damage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &ct)
    {
        _name = ct._name;
        _hp = ct._hp;
        _energy = ct._energy;
        _damage = ct._damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energy > 0)
    {
        std::cout << _name << " attacks " << target << " causing " << _damage << " damage!" << std::endl;
        _energy--;
    }
    else
    {
        std::cout << _name << " has no energy left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(int amount)
{
    _hp -= amount;
    if (_hp < 0)
        _hp = 0;
    std::cout << _name << " took " << amount << " damage, HP is now " << _hp << std::endl;
}

void ClapTrap::beRepaired(int amount)
{
    if (_hp <= 0 || _energy <= 0)
    {
        std::cout << "Cannot be repaired!";
        return ;
    }
    _hp += amount;
    // if (_hp > 10)
    //     _hp = 10;
    std::cout << _name << " repaired itself for " << amount << " HP, HP is now " << _hp << std::endl;
}