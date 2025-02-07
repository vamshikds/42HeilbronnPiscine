# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   00_a.c                                             :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: vadumpal <vadumpal@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/31 10:57:06 by vadumpal          #+#    #+#              #
#    Updated: 2025/01/31 11:11:07 by vadumpal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		while (argc[1][i])
		{
			if(argc[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
		write(1,"\n",1);
	}
	else
		write(1,"a\n",2);
}
