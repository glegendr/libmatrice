/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:18:54 by glegendr          #+#    #+#             */
/*   Updated: 2018/02/26 21:21:28 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

int		mat_get(t_mat *mat, int y, int x)
{
	return (mat->private_content[y * mat->private_line_size + x]);
}