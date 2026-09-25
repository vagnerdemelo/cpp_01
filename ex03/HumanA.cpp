/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 15:47:27 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/25 17:25:18 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon& weapon)
	: weaponType(weapon)
{
	this->_name = humanName;
}

void HumanA::attack()
{
	std::cout	<< this->_name
				<< " attacks with their "
				<< this->weaponType.getType()
				<< std::endl;
}
