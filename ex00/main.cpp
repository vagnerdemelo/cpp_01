/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 09:30:03 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/25 12:59:17 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	randomChump("Steve");
	std::cout << std::endl;
	Zombie* z = newZombie("Mark");
	z->announce();
	delete z;
	std::cout << std::endl;

	Zombie* z2 = newZombie("John");
	z2->announce();
	std::cout << std::endl;

	randomChump("Carl");
	std::cout << std::endl;

	delete z2;
	return 0;
}
