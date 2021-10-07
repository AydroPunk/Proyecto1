CC=gcc #defininir el compilador
EXE=conv #definir el nombre del ejecutable

CDEBUG= -g -Wall #definir las banderas de depuracion 
CSTD= -std=c99 #definir el estandar del lenguaje a utilizar 

CFLAGS = -Who-deprecated-register -O0 $(CDEBUG) $(CSTD)
CLIBS = -1m

COBJ = main funciones 

FILES = $(addsuffix .c, $(COBJ))
OBJS = $(addsuffix .o, $(COBJ))

CLEANLIST = $(addsuffix .o, $(COBJ))

.PHONY: all
all: wc

wc: $(FILES)
    $(MAKE) $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS) $(CLIBS)

.PHONY: clean
clean:
    rm -rf $(CLEANLIST)