/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:44:10 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/10 18:21:52 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
  unsigned char *copyData = (unsigned char *)dest;
  unsigned char *pasteData = (unsigned char *)src;

  while (n--)
    *copyData++ = *pasteData++;

  return (dest);
}
