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

> <kbd>login</kbd> : exam
>
> <kbd>password</kbd> : exam


## Setting up the Exam Dev Environment

Point a terminal to your `~/` directory and add the following lines to your `.zshrc`, `.gdbinit` and `.vimrc` files.

If any of these files does not exist, create it. This should be the case for both `.vimrc` and `.gdbinit`.

- `.zshrc`

Add convenient aliases:
```bash
# Compile with warnings & debug symbols
alias ccw='cc -Wall -Wextra -Werror -g'

# Git
alias ga='git add'
alias gst='git status'
alias gc='git commit -m'
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
set mouse=a	" Enable mouse
set noswapfile	" Disable swap files

set ruler
set number
set relativenumber

set tabstop=4
set shiftwidth=4

set autoindent
set smartindent

runtime! ftplugin/man.vim " Open man pages in Vim
```
___

## Logging into Examshell

- You can only log into <kbd>examshell</kbd> right on the starting time of the exam. 

- Use your 42 student `login` and `password` credentials to get access to <kbd>examshell</kbd>.

- You will be assigned an exercise randomly at each level.

- You can only progress to Level 2 after you have completed Level 1, and so on.

- You do NOT need to follow `Norminette`'s syntax rules while solving the exam.

___
## Submitting to the <kbd>Vogsphere</kbd>

- This is where the git aliases we defined in `.zshrc` come in. To validate each exercise, first you need to upload it to the <kbd>vogsphere</kbd> using git commands.

> <kbd>Tip</kbd> 
>
> - Never use `git add .` (or the alias `ga .`) to avoid staging files that are not required by the subject. Always specify the name of the file/files you want to stage.
>
> - Always use `git status` (or the alias `gst`) to make sure only files required by the subject are staged.
>
> - If you want to be extra cautious, setup a `.gitignore` at the root of the exam's submission directory, with contents similar to the following:
>
> ```gitignore
> .gitignore
> */a.out
> */main.c
> */gdb.txt
> */.gdbinit
> ```
___

## Exam Exercises

### Exam Rank 2

The Rank 2 Exam has four levels, comprised of several exercises each. 

> <kbd>Tip</kbd> 
>
> `ft_isspace` is a particularly helpful function when solving a lot of the exercises through every level of the exam.

Here follow the solutions to all exam exercises (as of January 2024), including all test code and `.gdbinit` files developed to test and study each exercise. 
___
| Level 1       | Level 2 | Level 3 | Level 4 |
| -------       | ------- | ------- | ------- |
| [first_word](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/first_word) | [alpha_mirror](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/alpha_mirror) | [add_prime_sum](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/add_prime_sum) | [flood_fill](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/flood_fill) |
| [fizzbuzz](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/fizzbuzz) | [camel_to_snake](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/camel_to_snake) | [epur_str](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/epur_str) | [fprime](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/fprime) |
| [ft_putstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_putstr) | [do_op](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/do_op) | [expand_str](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/expand_str) | [ft_itoa](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_itoa) |
| [ft_strcpy](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_strcpy) | [ft_atoi](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_atoi) | [ft_atoi_base](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_atoi_base) | [ft_list_foreach](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_foreach) |
| [ft_strlen](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_strlen) | [ft_strcmp](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strcmp) | [ft_list_size](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_list_size) | [ft_list_remove_if](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_list_remove_if) |
| [ft_swap](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ft_swap) | [ft_strcspn](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strcspn) | [ft_range](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_range) | [ft_split](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/ft_split) |
| [repeat_alpha](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/repeat_alpha) | [ft_strdup](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strdup) |  [ft_rrange](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/ft_rrange) | [rev_wstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rev_wstr) |
| [rev_print](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rev_print) | [ft_strpbrk](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strpbrk) | [hidenp](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/hidenp) | [rostring](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/rostring) |
| [rot_13](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rot_13) | [ft_strrev](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strrev) | [lcm](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/lcm) | [sort_int_tab](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_int_tab) |
| [rotone](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/rotone) | [ft_strspn](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/ft_strspn) | [paramsum](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/paramsum) | [sort_list](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_4/sort_list) |
| [search_and_replace](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/search_and_replace) | [inter](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/inter) | [pgdc](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/pgdc) |
| [ulstr](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_1/ulstr) | [is_power_of_2](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/is_power_of_2) | [print_hex](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/print_hex) |
|          | [last_word](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/last_word) | [rstr_capitalizer](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/rstr_capitalizer) |
|          | [max](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/max) | [str_capitalizer](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/str_capitalizer) |
|          | [print_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/print_bits) | [tab_mult](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_3/tab_mult) |
|          | [reverse_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/reverse_bits) |
|          | [snake_to_camel](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/snake_to_camel) |
|          | [swap_bits](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/swap_bits) |
|          | [union](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Level_2/union) |
|          | [wdmatch](https://github.com/PedroZappa/42ExamPrep/tree/main/Rank_2/Rank_2/Level_2/wdmatch) |
___







___

I'll be updating this repo with more tips and resources as I progress through the Common Core.

Good luck with the exams!

<div align="center">

### License :copyright:

This work is published under the terms of <a href="https://github.com/PedroZappa/ft_printf/blob/master/LICENSE">42 Unlicense</a>.

</div>
<p align="right">(<a href="#readme-top">get to top</a>)</p>
