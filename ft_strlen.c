/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:38:23 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/10 17:05:29 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s) {
  size_t index;

  index = 0;
  while (s[index]) {
    index++;
  }
  return (index);
}
