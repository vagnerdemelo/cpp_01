/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:00:16 by vade-mel          #+#    #+#             */
/*   Updated: 2026/10/02 22:53:02 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

void Harl::complain(std::string level)
{
	std::string const level_switch[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == level_switch[i])
			(this->*f[i])();
	}
}

void Harl::debug(void)
{
	std::cout	<< "DEBUG: "
				<< "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplopicles-ketchup-especial. Eu realmente amo!"
				<< std::endl;
}

void Harl::info(void)
{
	std::cout	<< "INFO: "
				<< "Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu não estaria pedindo por mais!"
				<< std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "WARNING: "
				<< "Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, enquanto você começou a trabalhar aqui apenas no mês passado."
				<< std::endl;
}

void Harl::error(void)
{
	std::cout	<< "ERROR: "
				<< "Isto é inaceitável! Eu quero falar com o gerente agora."
				<< std::endl;
}
