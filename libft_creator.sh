#!/bin/bash


cc -Wall -Wextra -Werror -c ft_lstnew.c -o ft_lstnew.o
cc -Wall -Wextra -Werror -c ft_lstadd_front.c -o ft_lstadd_front.o
cc -Wall -Wextra -Werror -c ft_lstsize.c -o ft_lstsize.o
cc -Wall -Wextra -Werror -c ft_lstlast.c -o ft_lstlast.o
cc -Wall -Wextra -Werror -c ft_lstadd_back.c -o ft_lstadd_back.o
cc -Wall -Wextra -Werror -c ft_lstdelone.c -o ft_lstdelone.o
cc -Wall -Wextra -Werror -c ft_lstclear.c -o ft_lstclear.o
cc -Wall -Wextra -Werror -c ft_lstiter.c -o ft_lstiter.o
cc -Wall -Wextra -Werror -c ft_lstmap.c -o ft_lstmap.o

echo "Done"
