
#..............................TARGET..................................#

NAME = Zombie

#..............................COMMANDS................................#

CC = c++

CFLAG = -Werror -Wall -Wextra -std=c++98

DFLAG = -MMD

MKDIR = mkdir -p

RM   = rm -f

MAKE_SILENT  = make --no-print-directory

#...............................PATH.....................................#

SRC_DIR  = srcs/

HEADER_DIR  = include/

OBJ_DIR    = obj/

#................................SOURCES.................................#

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
ALL_SRCS = $(addprefix $(SRC_DIR), $(SRCS))
OBJ = $(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(ALL_SRCS))

#..................................HEADER................................#

HEADERS = $(wildcard $(HEADER_DIR)*.hpp)

#...................................MAKEFILE.............................#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS) Makefile | $(OBJ_DIR)
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





