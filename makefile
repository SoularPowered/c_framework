#########################################################
# File: Makefile
# Author: Shawn Hillyer
#########################################################

CC = gcc

CFLAGS = -std=c99
CFLAGS += -Wall
# CFLAGS += -pedantic-errors
CFLAGS += -g

LDFLAGS = -lm

####################
### USER SECTION ###
####################

# SRCS
SRC1 = client.c
SRC2 =
SRC3 =
SRC4 =
SRC5 =
SRC6 =
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6}

# HEADERS
HEADER1 =
HEADER2 =
HEADER3 =
HEADER4 =
HEADER5 =
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5}

# EXECUTABLES
PROG1 = client
PROG2 =
PROG3 =
PROGS = ${PROG1} ${PROG2} ${PROG3}

# DOCUMENTS
DOC1 = cs162_assignment_hillyers.pdf
DOC2 =
DOC3 =
DOC4 = readme.txt
DOC5 = main.menu
DOCS = ${DOC1} ${DOC2} ${DOC3} ${DOC4} ${DOC5}

# COMPRESSED FILE
ZIP = output.zip

#####################
### BUILD SECTION ###
#####################

default:
	${CC} ${CFLAGS} ${SRCS} ${HEADERS} -o ${PROGS}

client:
	${CC} ${LDFLAGS} -o $@ $^

client.o: client.c
	${CC} ${CFLAGS} -o $@ -c $<


# make zip
zip:
	zip ${ZIP} ${SRCS} ${HEADERS} ${DOCS} makefile

# make clean
clean:
	rm -f ${PROGS} *.o *~
