#..............................TARGET..................................#

NAME = Brain

#..............................COMMANDS................................#

CC = c++

CFLAG = -Werror -Wall -Wextra -std=c++98

DFLAG = -MMD

MKDIR = mkdir -p

RM   = rm -f

MAKE_SILENT  = make --no-print-directory

#...............................PATH.....................................#

SRC_DIR  = srcs/

OBJ_DIR    = obj/

#................................SOURCES.................................#

SRCS = main.cpp
ALL_SRCS = $(addprefix $(SRC_DIR), $(SRCS))
OBJ = $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(ALL_SRCS))

#...................................MAKEFILE.............................#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp  Makefile | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) -c $< -o $@

$(OBJ_DIR) : 
		$(MKDIR) $@

clean :
	$(RM) -r $(OBJ_DIR)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
#.SILENT : 