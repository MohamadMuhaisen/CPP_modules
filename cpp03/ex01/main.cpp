/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:40:34 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/19 10:46:44 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Creating claptrap1 using default constructor..." << std::endl;
    ClapTrap claptrap1; 

    std::cout << "Creating claptrap2 using parameterized constructor..." << std::endl;
    ClapTrap claptrap2("Clappy");

    std::cout << "Calling attack on claptrap1..." << std::endl;
    claptrap1.attack("Enemy");

    std::cout << "Calling attack on claptrap2..." << std::endl;
    claptrap2.attack("Enemy");

    std::cout << "Calling takeDamage on claptrap2..." << std::endl;
    claptrap2.takeDamage(3);

    std::cout << "Calling beRepaired on claptrap2..." << std::endl;
    claptrap2.beRepaired(5);

    std::cout << "Creating claptrap3 using copy constructor..." << std::endl;
    ClapTrap claptrap3 = claptrap2;

    std::cout << "Creating claptrap4 using default constructor..." << std::endl;
    ClapTrap claptrap4;
    
    std::cout << "Assigning claptrap1 to claptrap4..." << std::endl;
    claptrap4 = claptrap1;

    std::cout << "_____________________________________________________" << std::endl;
    ScavTrap scavtrap1;
    ScavTrap scavtrap2("Scavvy");
    scavtrap2.attack("Enemy");
    scavtrap1.takeDamage(3);
    scavtrap2.guardGate();

    return 0;
}

