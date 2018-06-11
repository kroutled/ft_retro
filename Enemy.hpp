/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:11:54 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:11:55 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "Entity.hpp"

class Enemy : public Entity{

    private:

    public:
        Enemy( void );
        Enemy( int w, int h, int maxw, int maxh, char body );
        Enemy( Enemy const &src );
        virtual ~Enemy( void );

        Enemy  &operator=( Enemy const &rhs );

        void    displayEnemy( void );
        int     getXPos( void );
        int     getYPos( void );
        char    getBody( void );
        void    ft_moveDown( void );
        void    ft_moveUp( void );
        int     getMaxX(void);
        void    move(void);
        int     getY( void );
        int     getX( void );
};

#endif

