/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:39:02 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/06 16:32:46 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/Base.hpp"
#include"../includes/A.hpp"
#include"../includes/B.hpp"
#include"../includes/C.hpp"

//* CAST TYPE USED: Dynamique cast

int main(void)
{
    Base *ptr;

    ptr = generate();
    identify(ptr);

    Base &ref = *ptr;
    identify(ref);
    delete ptr;
}