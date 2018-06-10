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

Enemy::Enemy( void ) {}

Enemy::Enemy(int h, int w, int maxh, int maxw, char body) : Entity (h, w, maxh, maxw, body)
{
    //std::cout << "enemy created" << std::endl;
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
    this->_maxXPos = rhs._maxXPos;
    this->_maxYPos = rhs._maxYPos;
    this->_xPos = rhs._xPos;
    this->_yPos = rhs._yPos;
    this->_body = rhs._body;

    return *this;
}

void    Enemy::displayEnemy( void )
{
    int i = rand() % this->_maxXPos + 1;
    this->_yPos = 1;
    this->_xPos = i;
    mvaddch(this->_yPos, this->_xPos, this->_body);
}

int     Enemy::getXPos( void )
{
    return this->_xPos;
}

int     Enemy::getYPos( void )
{
    return this->_yPos;
}

char     Enemy::getBody( void )
{
    return this->_body;
}

void    Enemy::ft_moveUp( void )
{
    mvaddch(this->_yPos, this->_xPos, ' ');
    this->_yPos--;
    return;
}

void    Enemy::ft_moveDown( void )
{
    mvaddch(this->_yPos, this->_xPos, ' ');
    this->_yPos++;
    mvaddch(this->_yPos, this->_xPos, this->_body);
    return;
}

int    Enemy::getMaxX(void) {
    return this->_maxXPos;    
}

int     Enemy::getY( void )
{
    return this->_yPos;
}

int     Enemy::getX( void )
{
    return this->_xPos;
}