/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:11:59 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:12:00 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.hpp"

Ship::Ship ()
{
    return;
}

Ship::Ship( Ship const &src )
{
    *this = src;
    return;
}

Ship::~Ship( void )
{
    return;
}