/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:58:33 by iherman-          #+#    #+#             */
/*   Updated: 2025/08/05 19:33:17 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string 	_name;
		const Weapon	*_weapon;

	public:
		HumanB(const std::string &name);
		void	setWeapon(Weapon &new_weapon);
		void	attack() const;
};

#endif // HUMANB_HPP
