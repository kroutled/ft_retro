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

#include "Entity.hpp"

Entity::Entity ( void )
{
    return;
}

Entity::Entity (int maxXPos, int maxYPos, int xPos, int yPos) : _maxXPos(xPos), _maxYPos(yPos), _xPos(maxXPos), _yPos(maxYPos)
{
    return;
}

Entity::Entity( Entity const &src )
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
    this->_maxXPos = rhs._maxXPos;
    this->_maxYPos = rhs._maxYPos;
    this->_xPos = rhs._xPos;
    this->_yPos = rhs._yPos;
    this->_body = rhs._body;

    return *this;
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
