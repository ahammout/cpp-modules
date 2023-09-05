/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:37:58 by ahammout          #+#    #+#             */
/*   Updated: 2023/08/29 10:15:30 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/easyfind.hpp"

int main(void)
{
    std::vector<int> nums(6);

    try 
    {
        nums.push_back(1);
        nums.push_back(9);
        nums.push_back(5);
        nums.push_back(3);
        nums.push_back(2);
        nums.push_back(3);

        easyfind(nums, 5);
        easyfind(nums, 17);
    }
    catch (std::exception const &ex)
    {
        std::cout << "╳: Elament doesn't exist inside the countainer! " << std::endl; 
    }
}