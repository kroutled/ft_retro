/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lazers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:42:57 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/09 08:42:58 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAZERS_HPP
# define LAZERS_HPP

#include "Entity.hpp"

class Lazers : public Entity{

    private:

    public:
        Lazers( void );
        Lazers( int w, int h, int maxw, int maxh, char body );
        Lazers( Lazers const &src);
        virtual ~Lazers( void );

        Lazers  &operator=(Lazers const &rhs);

        void moveUp(void);
        void    ft_moveDown( void );
        void    ft_moveUp( void );
        void    placeBullet( int y, int x);
        int     getY( void );
        int     getX( void );
};

#endif
