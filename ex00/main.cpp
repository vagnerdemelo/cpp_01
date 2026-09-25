/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 09:30:03 by vade-mel          #+#    #+#             */
/*   Updated: 2026/09/25 12:11:30 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	randomChump("Steve");
	Zombie* z = newZombie("Mark");
	z->announce();

	delete z;
	return 0;
}
