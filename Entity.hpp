/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:12:23 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:12:24 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP

#include <iostream>
#include <string>
#include <ncurses.h>

class Entity{

    private:

    protected:
        int     _maxXPos;
        int     _maxYPos;
        int     _xPos;
        int     _yPos;
        char    _body;
        int     _score;

    public:

        Entity ( void );
        Entity( int xPos, int yPos, int maxXPos, int maxYPos, char body);
        Entity( Entity const &src );
        ~Entity( void );

        Entity  &operator=(Entity const &rhs);

        void            ft_shoot( void );
        virtual void    ft_moveDown( void ) = 0;
        virtual void    ft_moveUp( void ) = 0;
        void            ft_moveLeft( void );
        void            ft_moveRight( void );
        int             ft_getInput (int key);
        void            ft_display( void );
};

#endif 
