/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:12:18 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:12:19 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Entity::Entity ( void )
{
    return;
}

Entity  Entity::Entity(Entity const &src)
{
    *this = src;
    return;
}

Entity::~Entity ( void )
{
    return;
}

Entity     &Entity::operator=( Entity const &rhs)
{
    this->maxXPos = rhs.maxXPos;
    this->maxYPos = rhs.maxYPos;
    this->xPos = rhs.xPos;
    this->yPos = rhs.yPos;
    this->body = rhs.body;

    return *this
}

void    ft_moveUp( void )
{

}

void    ft_moveDown( void )
{

}

void    ft_moveRight( void )
{

}

void    ft_moveLeft( void )
{

}
