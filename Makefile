EXENAME = interface
OBJS = main.o manager.o item.o managerinterface.o purchase.o purchasemanager.o

CXX = clang++
CXXFLAGS = -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -lpng -lpthread -lm

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o : main.cpp manager.h managerinterface.h 
	$(CXX) $(CXXFLAGS) main.cpp

manager.o : manager.cpp manager.h purchasemanager.h item.h
	$(CXX) $(CXXFLAGS) manager.cpp

item.o : item.cpp item.h
	$(CXX) $(CXXFLAGS) item.cpp

managerinterface.o : managerinterface.cpp managerinterface.h manager.h
	$(CXX) $(CXXFLAGS) managerinterface.cpp

purchase.o : purchase.cpp purchase.h
	$(CXX) $(CXXFLAGS) purchase.cpp

purchasemanager.o : purchasemanager.cpp purchasemanager.h purchase.h
	$(CXX) $(CXXFLAGS) purchasemanager.cpp

clean :
	-rm -f *.o $(EXENAME) test
