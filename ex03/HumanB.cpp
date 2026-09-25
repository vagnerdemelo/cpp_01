/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:47:29 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/25 17:23:38 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName)
{
	this->_name = humanName;
	this->weaponType = NULL;
}

void HumanB::attack()
{
	if (this->weaponType != NULL)
		std::cout << "Attacking with: " << this->weaponType->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weaponType = &weapon;
}
