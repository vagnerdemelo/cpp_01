/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 09:30:03 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/25 15:31:29 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie* zombies = zombieHorde(4, "Steve");

	for (int i = 0; i < 4; i++)
		zombies[i].announce();

	delete[] zombies;
	return 0;
}
