/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 02:16:18 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/19 12:03:20 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap frag("Fragger");
    FragTrap frag2;
    frag.highFivesGuys();
    frag.attack("enemy");
    frag.takeDamage(20);
    frag.beRepaired(15);

    return 0;
}
