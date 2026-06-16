/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:37:28 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/16 20:13:12 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
    {
        std::cout   << "Wrong usage, please type with no arguments:\n"
                    << "./scavTrap" 
                    << std::endl;
        return (1);
    }
    else
    {
        ScavTrap scav( "scav" );
        ClapTrap clappy( "clappy" );
        ScavTrap copy( scav );
        ScavTrap test;
        
        test = copy;
        
        scav.attack( "clappy" );
        scav.guardGate();
        clappy.takeDamage( 20 );
        clappy.beRepaired( 2 );
    }
    return (0);
}
