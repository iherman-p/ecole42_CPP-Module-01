/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:58:37 by iherman-          #+#    #+#             */
/*   Updated: 2025/06/25 11:48:16 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}