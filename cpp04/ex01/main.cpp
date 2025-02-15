/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:28:18 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/22 14:45:52 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void testDeepCopy()
{
    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << "Basic idea: " << basic.getIdea() << std::endl;
}

int main()
{
    Animal *arr[10];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = new Dog();
        arr[i + 5] = new Cat();
        std::cout << "_______" << std::endl;
    }
    for (int i = 0; i < 10; i++)
        delete arr[i];

    // std::cout << std::endl << "<<<<<< DEEP COPY TEST >>>>>>" << std::endl << std::endl;
    // testDeepCopy();
    return 0;
}
