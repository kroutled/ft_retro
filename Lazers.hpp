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
        Lazers( int h, int w, int maxh, int maxw, char body );
        Lazers( Lazers const &src);
        ~Lazers( void );

        Lazers  &operator=(Lazers const &rhs);

        void moveUp(void);
};

#endif
