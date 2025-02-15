/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 03:16:10 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/22 14:43:57 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called!" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "A random idea :)";
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
    std::cout << "Brain copy constructor called!" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain assignation operator called!" << std::endl;
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}

std::string Brain::getIdea() const
{
    return (this->ideas[0]);
}
