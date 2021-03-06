/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ship.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:12:05 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:12:07 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_HPP
# define SHIP_HPP

#include "Entity.hpp"

class Ship : public Entity{

    private:

    public:
        Ship( int w, int h, int maxw, int maxh, char body );
        Ship(Ship const &src);
        ~Ship( void );

        Ship    &operator=(Ship const &rhs);

        virtual void    ft_moveDown( void );
        virtual void    ft_moveUp( void );
        void    setup( void );
        int    getX( void );
        int    getY( void );
        void   setScore( int score );
        int    getScore();
};

#endif

