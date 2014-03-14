PRJ = ad_blinky

CFLAGS = -lrt -lpthread
INC = ../../../lib/librpi
SRC = $(INC)/arduPi.cpp main.cpp 

all:
	sudo g++ $(CFLAGS) -I$(INC) $(SRC) -o $(PRJ)

.PHONY : clean
clean:
	sudo rm $(PRJ)
