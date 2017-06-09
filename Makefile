#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/06 21:39:23 by pbourlet          #+#    #+#             *#
#*   Updated: 2017/06/09 18:43:02 by pbourlet         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

LIBFT =	$(addprefix libft/, \
		ft_isprint.c \
		ft_memmove.c \
		ft_putstr_fd.c \
		ft_strdup.c \
		ft_strmap.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_memalloc.c \
		ft_memset.c \
		ft_strcat.c \
		ft_strequ.c \
		ft_strmapi.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_putchar_fd.c \
		ft_strchr.c \
		ft_striter.c \
		ft_strncat.c \
		ft_strstr.c \
		ft_isalnum.c \
		ft_memchr.c \
		ft_putendl.c \
		ft_strclr.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_strsub.c \
		ft_isalpha.c \
		ft_memcmp.c \
		ft_putendl_fd.c \
		ft_strcmp.c \
		ft_strjoin.c \
		ft_strncpy.c \
		ft_strtrim.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_putnbr.c \
		ft_strcpy.c \
		ft_strlcat.c \
		ft_strnequ.c \
		ft_tolower.c \
		ft_isdigit.c \
		ft_memdel.c \
		ft_putnbr_fd.c \
		ft_strdel.c \
		ft_strlen.c \
		ft_strnew.c \
		ft_toupper.c \
		ft_itoa.c \
		ft_strsplit.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_nblen.c \
		ft_strrev.c \
		ft_sqrt.c \
		ft_split_whitespaces.c \
		ft_recursive_power.c \
		ft_strcjoin.c \
		ft_atoibase.c \
		ft_itoabase.c \
		ft_putnstr.c \
		)

PRINTF = $(addprefix ft_printf/, \
		 ft_bintoa.c \
		 ft_itoaspec.c \
		 ft_lenlu.c \
		 ft_printf.c \
		 ft_solve.c \
		 ft_stock.c \
		 ft_stockspec.c \
		 ft_stockss.c \
		 ft_testdigit.c \
		 ft_testflags.c \
		 ft_testtype.c \
		 ft_strtoupper.c \
		 )

GNL =	$(addprefix get_next_line/, \
		get_next_line.c \
		)

INC =	\
		includes/libft.h \
		includes/get_next_line.h \
		includes/ft_printf.h \
		ft_printf/ft_printf.h \
		get_next_line/get_next_line.h\

SRCDIR =	src

OBJDIR =	obj

OBJ	=	$(LIBFT:libft/%.c=$(OBJDIR)/%.o)

OBJF =	$(PRINTF:ft_printf/%.c=$(OBJDIR)/%.o)

OBJG =	$(GNL:get_next_line/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): dir $(OBJ) $(OBJF) $(OBJG)
	@ar rc $(NAME) $(OBJ) $(OBJF) $(OBJG)
	@ranlib $(NAME)

$(OBJDIR)/%.o: libft/%.c $(INC)
	@gcc -c -Wall -Wextra -Werror -o $@ -c $< -I./includes

$(OBJDIR)/%.o: ft_printf/%.c $(INC)
	@gcc -c -Wall -Wextra -Werror -o $@ -c $< -I./includes

$(OBJDIR)/%.o: get_next_line/%.c $(INC)
	@gcc -c -Wall -Wextra -Werror -o $@ -c $< -I./includes
	@echo "\033[34;01m===== \c"
	@echo "\033[32;01mLIB CREATED\c"
	@echo "\033[34;01m   ====="
	@echo "\033[0m\c"

dir:
	@mkdir -p $(OBJDIR)

clean:
	@echo "\033[31m===== \c"
	@echo "\033[32;01mDIR CLEAN LIB\c"
	@echo "\033[0m\033[31m =====\033[0m"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "\033[31m===== \c"
	@echo "\033[32;01mEXE CLEAN LIB\c"
	@echo "\033[0m\033[31m =====\033[0m"
	@rm -rf $(NAME)

re: fclean all
