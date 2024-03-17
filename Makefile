# Define the compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Define the source files directory
SRCDIR := .

# Define the executable name
EXECUTABLE := myprogram

TARGETS := 1 2 3 4

MAIN_SRCS := $(addprefix $(SRCDIR)/main-,$(addsuffix -1.cpp,$(TARGETS)))
FUNC_SRCS := $(addprefix $(SRCDIR)/function-,$(addsuffix -1.cpp,$(TARGETS)))

MAIN_OBJS := $(MAIN_SRCS:.cpp=.o)
FUNC_OBJS := $(FUNC_SRCS:.cpp=.o)

$(EXECUTABLE): $(MAIN_OBJS) $(FUNC_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%: $(SRCDIR)/main-%-1.o $(SRCDIR)/function-%-1.o
	$(CXX) $(CXXFLAGS) $^ -o $(EXECUTABLE)

$(SRCDIR)/main-%-1.o: $(SRCDIR)/main-%-1.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(SRCDIR)/function-%-1.o: $(SRCDIR)/function-%-1.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(MAIN_OBJS) $(FUNC_OBJS)

# PHONY targets
.PHONY: all clean
