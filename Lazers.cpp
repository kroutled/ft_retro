/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lazers.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:42:51 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:42:52 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Lazers.hpp"
#include "unistd.h"

Lazers::Lazers( void ){}

Lazers::Lazers(int h, int w, int maxh, int maxw, char body) : Entity(h, w, maxh, maxw, body)  
{
    return;
}

Lazers::Lazers(Lazers const &src)
{
    *this = src;
    return;
}

Lazers::~Lazers()
{
    return;
}

Lazers  &Lazers::operator=(Lazers const &rhs)
{
    this->_maxXPos = rhs._maxXPos;
    this->_maxYPos = rhs._maxYPos;
    this->_xPos = rhs._xPos;
    this->_yPos = rhs._yPos;
    this->_body = rhs._body;

    return *this;
}

// void Lazers::moveUp(void) {
//     mvaddch(this->_yPos, this->_xPos, ' ');
//     this->_yPos--;
//     mvaddch(this->_yPos, this->_xPos, this->_body);
// }

void    Lazers::placeBullet (int y, int x)
{
    this->_xPos = x;
    this->_yPos = y - 1;
    mvaddch(this->_yPos, this->_xPos, this->_body);
}

void    Lazers::ft_moveUp( void )
{
    mvaddch(this->_yPos, this->_xPos, ' ');
    this->_yPos--;
    mvaddch(this->_yPos, this->_xPos, this->_body);
    return;
}

void    Lazers::ft_moveDown( void )
{
    mvaddch(this->_yPos, this->_xPos, ' ');
    this->_yPos++;
    mvaddch(this->_yPos, this->_xPos, this->_body);
    return;
}