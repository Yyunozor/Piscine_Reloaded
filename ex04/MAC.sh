# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 14:54:42 by anpayot           #+#    #+#              #
#    Updated: 2024/09/29 22:06:03 by anpayot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig | grep -oE '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'

# ifconfig | awk '/ether/ {print $2}'
