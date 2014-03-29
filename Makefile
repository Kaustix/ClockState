##   LAB BUILDS
##CFLAGS = -I /home/lib2720/allegro5/include -std=c++0x
##LIBDIR = /home/lib2720/allegro5/lib/

##  KIERNAN BUILDS
##CFLAGS = -I /usr/include/allegro5 -std=c++0x
##LIBDIR = /usr/lib

#LNFLAGS = -lallegro -lallegro_primitives -lcppunit -ldl

CFLAGS = -I /usr/include/allegro5 -std=c++0x
LIBDIR = /usr/lib
LNFLAGS = -lncurses -g
COMMONOBJECTS = Clock.o CurrentTimeState.o SetHourState.o SetMinuteState.o
OBJECTS = main.o
CC = g++

all: clock

clock: $(COMMONOBJECTS) $(OBJECTS)
	$(CC) -L $(LIBDIR) -o $@ $^ $(LNFLAGS) 

%.o : %.cc
	g++ $(CFLAGS) -c $< -o $@
	$(CC) $(CCFLAGS) -MM -MP -MT $@ $< > $(basename $@).d

.PHONY : clean
clean :
	rm -f *.o *~ *.d

## include the generated dependency files
-include $(addsuffix .d,$(basename $(OBJECTS)))
