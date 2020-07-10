/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:05:39 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/10 17:32:27 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strrev(char *str)
{
	char *return_string;
	int counter;

	counter = 0;
	
	while( str[counter] != '\0')
	{
		counter++;
	}

	counter -= 1;

	while(counter > 0)
	{
	return_string[counter] = str[counter];

	counter--;
	}

	return return_string;
}

