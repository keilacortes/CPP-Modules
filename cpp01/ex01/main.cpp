/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kqueiroz <kqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 09:36:38 by kqueiroz          #+#    #+#             */
/*   Updated: 2026/04/08 10:34:12 by kqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
    int N = 1;
    Zombie *horde = zombieHorde(N, "horde");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete []horde;
    return 0;
}
