/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:00:16 by vade-mel          #+#    #+#             */
/*   Updated: 2026/10/02 23:52:06 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

void Harl::complain(std::string level)
{
	std::string const level_switch[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int level_int = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == level_switch[i])
		{
			level_int = i;
			break;
		}
	}

	switch (level_int)
	{
	case 0:
		Harl::debug();
		// fall through
	case 1:
		Harl::info();
		// fall through
	case 2:
		Harl::warning();
		// fall through
	case 3:
		Harl::error();
		break;
	default:
		std::cout << "[ Provavelmente reclamando sobre problemas insignificantes ]\n" << std::endl;
		break;
	}
}

void Harl::debug(void)
{
	std::cout	<< "[ DEBUG ]\n"
				<< "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplopicles-ketchup-especial.\n"
				<< "Eu realmente amo!\n"
				<< std::endl;
}

void Harl::info(void)
{
	std::cout	<< "[ INFO ]\n"
				<< "Eu não acredito que adicionar bacon extra custa mais dinheiro.\n"
				<< "Vocês não colocaram bacon suficiente no meu hambúrguer!\n"
				<< "Se vocês tivessem colocado, eu não estaria pedindo por mais!\n"
				<< std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "[ WARNING ]\n"
				<< "Eu acho que mereço ter bacon extra de graça.\n"
				<< "Eu venho aqui há anos, enquanto você começou a trabalhar aqui apenas no mês passado.\n"
				<< std::endl;
}

void Harl::error(void)
{
	std::cout	<< "[ ERROR ]\n"
				<< "Isto é inaceitável! Eu quero falar com o gerente agora.\n"
				<< std::endl;
}
