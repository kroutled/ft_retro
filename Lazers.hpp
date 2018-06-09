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

class Lazers {

    private:

    public:
        Lazers( void );
        Lazers( Lazer const &src);
        ~Lazers( void );

        Lazers  &operator=(Lazers const &rhs);
};

#endif
