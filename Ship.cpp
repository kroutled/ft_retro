/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ship.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:11:59 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/10 11:24:18 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.hpp"

Ship::Ship ( int h, int w, int maxh, int maxw, char body ) //: Entity (h, w, maxw, maxh, body)
{
    this->_xPos = w;
    this->_yPos = h;
    this->_maxXPos = maxw;
    this->_maxYPos = maxh;
    this->_body = body;
    std::cout << "ship created" << std::endl;
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

Ship    &Ship::operator=(Ship const &rhs)
{
    this->_maxXPos = rhs._maxXPos;
    this->_maxYPos = rhs._maxYPos;
    this->_xPos = rhs._xPos;
    this->_yPos = rhs._yPos;
    this->_body = rhs._body;

    return *this;
}

void    Ship::setup( void )
{
    this->_xPos = this->_maxXPos / 2;
    this->_yPos = this->_maxYPos -3;
    mvaddch(this->_yPos, this->_xPos, this->_body);
}

void    Ship::ft_moveDown( void )
{
    return;
}

void    Ship::ft_moveUp( void )
{
    return;
}

int    Ship::getX( void )
{
    return this->_xPos;
}

int    Ship::getY( void )
{
    return this->_yPos;
}

void    Ship::setScore( int score)
{
    this->_score += score;
}
