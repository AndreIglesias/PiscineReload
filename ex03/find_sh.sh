# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciglesia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 13:05:48 by ciglesia          #+#    #+#              #
#    Updated: 2018/11/08 13:05:56 by ciglesia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

find . -type f -name "*.sh" -exec basename {} ".sh" \;