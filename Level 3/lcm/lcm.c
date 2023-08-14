/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:05:03 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/31 14:05:05 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n;
    if((a == 0) || (b == 0))
        return(0);
    if(a > b)
        n = a;
    else
        n = b;
    while(1)
    {
        if(n % a == 0 && n % b == 0)
            return(n);
        ++n;
    }   
}

