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

Entity::Entity (int xPos, int yPos, int maxXPos, int maxYPos, char body) : _xPos(xPos), _yPos(yPos), _maxXPos(maxXPos), _maxYPos(maxYPos), _body(body)
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

void    Entity::ft_moveRight( void )
{
    mvaddch(this->_yPos, this->_xPos, ' ');
    if (this->_xPos + 1 < this->_maxXPos - 1)
        this->_xPos++;
    return;
} 

void    Entity::ft_moveLeft( void )
{
    mvaddch(this->_yPos, this->_xPos, ' ');
    if (this->_xPos - 1 > 0)
        this->_xPos--;
    return;
}

int     Entity::ft_getInput (int key)
{
    if (key == 'q')
        return (0);
    if (key == KEY_UP)
    {
        ft_moveUp();
        ft_display();
        return (1);
    }
    else if (key == KEY_DOWN)
    {
        ft_moveDown();
        ft_display();
        return (1);
    }
    else if (key == KEY_LEFT )
    {
        ft_moveLeft();
        this->ft_display();
        return (1);
    }
    else if (key == KEY_RIGHT)
    {
        ft_moveRight();
        this->ft_display();
        return (1);
    }
    else if(key == ' ')
    {
        this->ft_moveRight();
        this->ft_display();
        return(1);
    }
    else
        return (1);
}

void    Entity::ft_display( void )
{
    mvaddch(this->_yPos, this->_xPos, this->_body);
    refresh();
    return;
}