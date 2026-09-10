/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aradaide <aradaide@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:24:25 by aradaide          #+#    #+#             */
/*   Updated: 2026/09/10 18:19:01 by aradaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n) {
  size_t i;
  char *str;

  str = (char *)s;
  i = 0;
  while (i < n) {
    str[i] = 0;
    i++;
  }
}

int main(void) {
  printf("=== TEST 1: Integer Array ===\n");
  int arr1[5] = {10, 20, 30, 40, 50};
  printf("Before: %d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3],
         arr1[4]);
  ft_bzero(arr1, sizeof(arr1));
  printf("After:  %d %d %d %d %d\n\n", arr1[0], arr1[1], arr1[2], arr1[3],
         arr1[4]);

  printf("=== TEST 2: Partial Bzero ===\n");
  int arr2[5] = {10, 20, 30, 40, 50};
  printf("Before: %d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3],
         arr2[4]);
  ft_bzero(arr2, 8);
  printf("After (8 bytes): %d %d %d %d %d\n\n", arr2[0], arr2[1], arr2[2],
         arr2[3], arr2[4]);

  printf("=== TEST 3: String ===\n");
  char str[11] = "Hello";
  printf("Before: %s\n", str);
  ft_bzero(str, 10);
  printf("After: %s", str);

  return (0);
}
