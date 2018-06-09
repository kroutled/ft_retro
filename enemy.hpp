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

class Enemy{

    private:

    public:
        Enemy( void );
        Enemy( Enemy const &src );
        ~Enemy( void );

        Entity  &operator=( Entity const &rhs );
};

#endif