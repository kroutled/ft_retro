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

class Ship{

    private:
    
    public:
        Ship( void );
        Ship(Ship const &src);
        ~Ship( void );

        Ship    &operator=(Ship const &rhs);
};

#endif
