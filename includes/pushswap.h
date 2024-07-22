/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakra <kakra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:18:04 by kakra             #+#    #+#             */
/*   Updated: 2024/07/09 22:35:13 by kakra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	int					push_price;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}				t_stack_node;

t_stack_node	*find_last_node(t_stack_node *last);
char			**ft_split(char *str, char sep);
t_stack_node	*find_smallest(t_stack_node *stack);
long			ft_atol(char *str);
int				error_dup(t_stack_node *a, int nbr);
int				errorsyn(char *str);
void			free_argv(char **argv);
void			push(t_stack_node **dest, t_stack_node **src);
void			rotate(t_stack_node **stack);
int				stack_len(t_stack_node *stack);
void			sa(t_stack_node	**a, bool checker);
void			sb(t_stack_node **b, bool checker);
void			ss(t_stack_node **a, t_stack_node **b, bool checker);
void			rra(t_stack_node **a, bool checker);
void			rrb(t_stack_node **b, bool checker);
void			rrr(t_stack_node **a, t_stack_node **b, bool checker);
void			ra(t_stack_node **a, bool checker);
void			rb(t_stack_node **b, bool checker);
void			rr(t_stack_node **a, t_stack_node **b, bool checker);
void			pa(t_stack_node **a, t_stack_node **b, bool checker);
void			pb(t_stack_node **b, t_stack_node **a, bool checker);
t_stack_node	*max_node(t_stack_node	*stack);
bool			stack_sorted(t_stack_node *stack);
void			tiny_sort(t_stack_node **a);
void			push_swap(t_stack_node **a, t_stack_node **b);
void			free_stack(t_stack_node **stack);
void			stack_init(t_stack_node	**a, char	**argv, bool flag_argc_2);
void			error_free(t_stack_node **a, char **argv, bool flag_argc_2);
t_stack_node	*find_smallest(t_stack_node *stack);
t_stack_node	*return_cheapest(t_stack_node *stack);
void			move_nodes(t_stack_node **a, t_stack_node **b);
void			push_swap(t_stack_node **a, t_stack_node **b);
void			set_current_position(t_stack_node *stack);
void			set_price(t_stack_node *a, t_stack_node *b);
void			set_cheapest(t_stack_node *b);
void			init_nodes(t_stack_node *a, t_stack_node *b);
void			handle_five(t_stack_node **a, t_stack_node **b);

#endif