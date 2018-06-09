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

class Entity{

    private:
        int     maxXPos;
        int     maxYPos;
        int     xPos;
        int     yPos;
        char    body;

    public:
        Entity( int xPos, int yPos, int maxXPos, int maxYPos );
        Entity( Entity const &src );
        ~Entity( void );

        Entity  &operator=(Entity const &rhs);

        void    ft_shoot( void );
        void    ft_moveDown( void );
        void    ft_moveUp( void );
        void    ft_moveLeft( void );
        void    ft_moveRight( void );
};

#endif 
