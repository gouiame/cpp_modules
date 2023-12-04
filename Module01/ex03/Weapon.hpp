/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:15:30 by cgouiame          #+#    #+#             */
/*   Updated: 2023/11/30 16:21:43 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon(std::string type);
		~Weapon();
		void	setType(std::string type);
		const std::string&	getType();

};

#endif


// #ifndef HUMANA_HPP
// #define HUMANA_HPP

// #include <string>
// #include "Weapon.hpp" // Assurez-vous d'inclure le header de la classe Weapon

// class HumanA {
// private:
//     std::string m_name;
//     Weapon& m_weapon; // Référence à une arme, car HumanA doit toujours avoir une arme

// public:
//     HumanA(const std::string& name, Weapon& weapon);
//     ~HumanA();

//     void attack() const;
// };

// #endif