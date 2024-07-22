# Push_Swap
## Overview
Push_swap is a project at 42 school that help students understand sorting algorithms. The goal of this project is to sort a stack of integers using a limited set of operations in the most efficient way possible.

## Operations
Here are the primary operations you can use in Push_swap:

* sa (swap a): Swap the first two elements at the top of stack A.
* sb (swap b): Swap the first two elements at the top of stack B.
* ss: sa and sb at the same time.
* pa (push a): Take the first element at the top of stack B and put it at the top of stack A.
* pb (push b): Take the first element at the top of stack A and put it at the top of stack B.
* ra (rotate a): Shift all elements of stack A up by 1. The first element becomes the last one.
* rb (rotate b): Shift all elements of stack B up by 1. The first element becomes the last one.
* rr: ra and rb at the same time.
* rra (reverse rotate a): Shift all elements of stack A down by 1. The last element becomes the first one.
* rrb (reverse rotate b): Shift all elements of stack B down by 1. The last element becomes the first one.
* rrr: rra and rrb at the same time.

## Turk Algorithim
In this project, I implemented the Turk algorithm to efficiently sort the stack. Turk algorithim is an algorithim that a 42 student made to solve push_swap project.The Turk algorithm is a custom sorting algorithm designed for optimizing the sequence of operations needed to sort the stack of integers.

## Usage
To use the Push_swap program, you need to provide an input stack of integers. The program will then output the sequence of operations required to sort the stack.
```console
git clone https://github.com/khaledakra/push_swap.git
```
```console
cd push_swap
```
```console
make
```
## Runing The Program
```console
./push_swap [List Of Integers either as a string or numbers]
```
### For example
```console
./push_swap 4 67 3 87 23
```
Output :
pb\
pb\
ra\
pb\
ra\
sa\
pa\
pa\
pa

## Author
Khaled Akra\
khaledakrapersonal@gmail.com\
khaledakra