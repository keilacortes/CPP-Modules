/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 19:37:28 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/06/16 19:40:25 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
    {
        std::cout << "Wrong usage, please type with no arguments:\n"
                  << "./clapTrap" 
                  << std::endl;
        return (1);
    }
    else
    {
        ClapTrap clappy("clappy");
        ClapTrap flappy("flappy");
        ClapTrap cloneFlappy(flappy);
        ClapTrap victim("victim");
        ClapTrap killer("killer");
        ClapTrap cloneTheClone;

        cloneTheClone = cloneFlappy;
        for (int i = 0; i < 4; i++)
            clappy.attack( "flappy" );
        for (int j = 0; j < 4; j++)
            flappy.takeDamage( 1 );
        flappy.beRepaired( 2 );
        for (int k = 0; k < 8; k++)
            clappy.attack( "flappy" );
        killer.attack( "victim" );
        victim.takeDamage( 10000 );
        victim.beRepaired( 2 );
    }
    return (0);
}
