/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:11:45 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:11:46 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
    return;
}

Enemy::Enemy( Enemy const &src )
{
    *this = src;
    return;
}

Enemy::~Enemy( void )
{
    return;
}

Enemy   &Enemy::operator=(Enemy const &rhs)
{

}