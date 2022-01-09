CC = gcc
CFLAGSW = -Wall
CFLAGSC = -c
CFLAGO = -o
LIB = lib
LIB_O=$(LIB).o
LIB_C=$(LIB).c
LIB_H=$(LIB).h
L_13 = 13
L_13_O=$(L_13).o
L_13_C=$(L_13).c

all: $(L_13_O) $(LIB_O)
	$(CC) $(LIB_O) $(L_13_O) $(CFLAGSW) $(CFLAGO) $(L_13)

$(LIB_O): $(LIB_C) $(LIB_H)
	$(CC) $(CFLAGSC) $(CFLAGSW) $(LIB_C)

$(L_13_O): $(L_13_C)
	$(CC) $(CFLAGSC) $(CFLAGSW) $(L_13_C)
