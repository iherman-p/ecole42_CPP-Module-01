/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:58:31 by iherman-          #+#    #+#             */
/*   Updated: 2025/08/05 19:40:21 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string &name)
	: _name(name)
{
	_weapon = NULL;
}

void	HumanB::attack() const
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " weeps in defeat as he cannot attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
