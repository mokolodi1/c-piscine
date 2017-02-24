# create .o files from .c files
gcc -c ft_*.c

# make .o files into library (.a)
ar rc libft.a ft_*.o

# make it faster :D
ranlib libft.a

# remove all of the .o files
rm *.o
