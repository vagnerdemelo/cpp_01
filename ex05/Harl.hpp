/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vade-mel <vade-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:00:20 by vade-mel          #+#    #+#             */
/*   Updated: 2026/10/02 22:34:27 by vade-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
class Harl
{
private:
	void debug ( void );
	void info ( void );
	void warning ( void );
	void error ( void );
public:
	Harl( void );
	void complain( std::string level );
};

#endif
