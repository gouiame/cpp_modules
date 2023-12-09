/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:54:52 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/09 18:41:08 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Clap_One");
    ClapTrap clap2("Clap_Two");

    // Appel des méthodes
    clap1.attack("Target");
    clap2.takeDamage(5);
    clap1.beRepaired(3);
    clap2.attack("Another Target");
    clap1.takeDamage(15);
    clap2.beRepaired(2);

    return 0;
}