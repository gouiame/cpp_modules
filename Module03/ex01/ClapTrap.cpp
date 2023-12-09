/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgouiame <cgouiame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:58:39 by cgouiame          #+#    #+#             */
/*   Updated: 2023/12/09 18:45:45 by cgouiame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
     std::cout << "Copy assignment operator called" << std::endl;
     if (this != &other)
     {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
     }
     return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(_hitPoints <= 0 || _energyPoints <= 0)
        std::cout << "ClapTrap can't do anything" << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints = _energyPoints - 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints <= 0 || _energyPoints <= 0)
        std::cout << "ClapTrap can't do anything" << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        _hitPoints = _hitPoints - amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hitPoints <= 0 || _energyPoints <= 0)
        std::cout << "ClapTrap can't do anything" << std::endl;
    else
    {
       std::cout << "ClapTrap " << _name << " is being repaired and gains " << amount << " hit points!" << std::endl;
        _hitPoints = _hitPoints + amount;
        _energyPoints = _energyPoints - 1;
    }
}
