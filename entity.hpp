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

class entity{

    private:
        int     maxXPos;
        int     maxYPos;
        int     xPos;
        int     yPos;
        char    body;

    public:
        entity( void );

        entity( entity &src );
        ~entity( void );

        entity  *operator=(entity &rhs);

        void    shoot( void );
};

#endif 
