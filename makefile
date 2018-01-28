CXXFLAGS = -Wall -std=c++14
LDFLAGS=
CPP=g++
LD=g++

.SUFFIXES:
.SUFFIXES: .o .cpp

EXECS = stack_main stack_test

SRCS_stack = Stack.cpp 
OBJS_stack = ${SRCS_stack:.cpp=.o}

SRCS_main = main.cpp 
OBJS_main = ${SRCS_main:.cpp=.o}

SRCS_test = test.cpp test2.cpp
OBJS_test = ${SRCS_test:.cpp=.o}

all: $(EXECS)

.cpp.o:
	$(CPP) $(CXXFLAGS) -c $<

stack_main: $(OBJS_stack) $(OBJS_main) 
	$(LD) $(LDFLAGS) -o $@ $^

stack_test: $(OBJS_stack) $(OBJS_test) 
	$(LD) $(LDFLAGS) -o $@ $^

clean:
	rm -rf *.o
	rm -rf $(EXECS)

cleanedit:
	rm -rf *~

