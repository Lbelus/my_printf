# Welcome to My Printf
***

```

                                                ________________________________________________
                                             /                                                \
                                            |    _________________________________________     |
                                            |   |                                         |    |
                                            |   |  C:\> hello_world                       |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |                                         |    |
                                            |   |_________________________________________|    |
                                            |                                                  |
                                            \_________________________________________________/
                                                    \___________________________________/
                                                    ___________________________________________
                                                _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_
                                            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_
                                        _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_
                                        _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_
                                    _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_
                                    :-------------------------------------------------------------------------:
                                    `---._.-------------------------------------------------------------._.---'
                                                                

                                        ███╗   ███╗██╗   ██╗     ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗
                                        ████╗ ████║╚██╗ ██╔╝     ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝
                                        ██╔████╔██║ ╚████╔╝      ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  
                                        ██║╚██╔╝██║  ╚██╔╝       ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  
                                        ██║ ╚═╝ ██║   ██║███████╗██║     ██║  ██║██║██║ ╚████║   ██║   ██║     
                                        ╚═╝     ╚═╝   ╚═╝╚══════╝╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝
ASCII art by -Roland Hangg-
```


## Task
    
Printf is a function that allow an user to write output to stdout. it accepts a variable amount of arguments that are processed through a format specifier.
Processing a variable amount of argument without control present some risks.

Objectives :

- To make a ``variadic function`` that reproduce ``printf`` behavior;
- To understand and reproduce ``flags`` (``c``,``s``,``d``,``o``,``u``,``x``,``p``) and their behavior such as printf int overflow;
- to be able to retrieve a ``pointer address``.
- To return the number of character printed. 

## Description
With the exception of <sdtarg.h>. almost every function ``puts`` and ``string`` are custom. 
There is 3 different ITOA ot match ``int``, ``unsigned`` and ``long long``. 
It was critical to match the good int to type to reproduce printf behaviors.

```     
|                                             ┍-------------┑
|                                             |00_my_printf |
|                                             └------┳------┘
|                                                    |
|                                                    |
|                         ┍--------------------------╇--------------------------------------┑
|                         |                          |                                      |
|                  ┍------┸------┑         ┍---------┸-----------┑                 ┍--------┸---------┑
|                  |   my_puts   |         |       my_ITOA       |                 |    My_string     |                
|                  └-------------┘         └---------------------┘                 └------------------┘ 
|                         |                           |                                     |                                        
|                      02_my_putchar                  |                                     12_my_revswap.c
|                        ->|03_my_putstr              |                                     |
|                           ->|04_myputint ---------->|08_itoa                              13_my_strlen.c
|                           ->|05_myputuint------┍--->|09_wrap_arround                      
|                           ->|06_myputuaddr-----┘     ->|10_itoa_unsigned                  
|              +07_my_putesc                           ->|11_itoa_long_long                 
|                                                                                           
|                                                                                           
```

## Installation

In order to use ``my_printf`` you must first compile the program :

> Insert ``make my_printf`` into terminal

If you want to clean compile file :

> Insert ``make fclean`` into terminal

To test ``my_printf`` :

> Insert ``./my_printf`` into terminal 

## Usage

to use my_printf inside your main you can follow next exemple :

to select number of round :
> Insert ``./my_mastermind -t n`` into terminal
```
./my_project argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar Silicon Valley</a></i></span>
<span><img alt='Qwasar Silicon Valley Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
