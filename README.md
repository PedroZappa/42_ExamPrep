<a name="readme-top"></a>
<div align="center">

# 42-ExamPrep

> Tips and resources for Exam Preparation

<p>
    <img src="https://img.shields.io/github/languages/top/PedroZappa/42ExamPrep?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/PedroZappa/42ExamPrep?style=for-the-badge" />
</p>

</div>

# Exam Tips 

- Arrive early to the cluster for exams (15/20 minutes) to have time to setup your exam dev environment.

From the moment you are assigned a computer you can login right away with the credentials provided. Expect something like:

> login : exam
>
> password : exam


## Exam Dev Environment Configuration Example

Point a terminal to your `~/` directory and add the following lines to your `.zshrc`, `.gdbinit` and `.vimrc` files.

If any of these files does not exist, create it. This should be the case for both `.vimrc` and `.gdbinit`.

- `.zshrc`

Add an alias for the `cc -Wall -Wextra -Werror -g` compiler as `ccw` for ease of use.
```bash
alias ccw='cc -Wall -Wextra -Werror -g'
```
___

- `.gdbinit`

This line allows GDB to load a `.gdbinit` file from any working directory in the system.
 
> Check out my [get_next_line](https://github.com/PedroZappa/get_next_line) repo for more info on using `.gdbinit`.
```bash
set auto-load safe-path /
```
___

- `.vimrc`

A basic vim configuration, edit this to your liking.
```vim
syntax on
set mouse=a " Enable mouse

set ruler
set number
set relativenumber

set tabstop=4
set shiftwidth=4

set autoindent
set smartindent

runtime! ftplugin/man.vim " Open man pages in Vim
```

## Exam Exercises

### Exam Rank 2

Here follow the solutions to all exam exercises (as of January 2024). 

I included all the test code and `.gdbinit` files I used to prepare for the exam. 

Good luck with the exam!

___

#### Level 1

- [first_word](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/first_word)
- [fizzbuzz](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/fizzbuzz)
- [ft_putstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_putstr)
- [ft_strcpy](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_strcpy)
- [ft_strlen](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_strlen)
- [ft_swap](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_swap)
- [repeat_alpha](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/repeat_alpha)
- [rev_print](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rev_print)
- [rot_13](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rot_13)
- [rotone](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rotone)
- [search_and_replace](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/search_and_replace)
- [ulstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ulstr)

___

#### Level 2

- [alpha_mirror](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/alpha_mirror)
- [camel_to_snake](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/camel_to_snake)
- [do_op](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/do_op)
- [ft_atoi](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_atoi)
- [ft_strcmp](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strcmp)
- [ft_strcspn](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strcspn)
- [ft_strdup](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strdup)
- [ft_strpbrk](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strpbrk)
- [ft_strrev](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strrev)
- [ft_strspn](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strspn)
- [inter](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/inter)
- [is_power_of_2](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/is_power_of_2)
- [last_word](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/last_word)
- [max](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/max)
- [print_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/print_bits)
- [reverse_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/reverse_bits)
- [snake_to_camel](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/snake_to_camel)
- [swap_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/swap_bits)
- [union](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/union)
- [wdmatch](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Rank_2/Level_2/wdmatch)

___

#### Level 3

- [add_prime_sum](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/add_prime_sum)
- [epur_str](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/epur_str)
- [expand_str](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/expand_str)
- [ft_atoi_base](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_atoi_base)
- [ft_list_size](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_list_size)
- [ft_range](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_range)
- [ft_rrange](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_rrange)
- [hidenp](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/hidenp)
- [lcm](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/lcm)
- [paramsum](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/paramsum)
- [pgdc](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/pgdc)
- [print_hex](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/print_hex)
- [rstr_capitalizer](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/rstr_capitalizer)
- [str_capitalizer](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/str_capitalizer)
- [tab_mult](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/tab_mult)

___

#### Level 4

- [flood_fill](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/flood_fill)
- [fprime](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/fprime)
- [ft_itoa](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_itoa)
- [ft_list_foreach](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_foreach)
- [ft_list_remove_if](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_remove_if)
- [ft_split](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_split)
- [rev_wstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rev_wstr)
- [rostring](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rostring)
- [sort_int_tab](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_int_tab)
- [sort_list](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_list)

___

### License :copyright:

This work is published under the terms of <a href="https://github.com/PedroZappa/ft_printf/blob/master/LICENSE">42 Unlicense</a>.

<p align="right">(<a href="#readme-top">get to top</a>)</p>
