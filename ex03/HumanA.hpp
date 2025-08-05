/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iherman- <iherman-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:58:29 by iherman-          #+#    #+#             */
/*   Updated: 2025/08/05 19:38:21 by iherman-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string		_name;
		const Weapon	&_weapon;

	public:
		HumanA(const std::string &name, const Weapon &weapon);
		void	attack() const;
};

#endif // HUMANA_HPP
