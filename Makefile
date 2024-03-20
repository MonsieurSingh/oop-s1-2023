# Define the compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Define the source files directory
SRCDIR := .

# Define the executable name
EXECUTABLE := myprogram

TARGETS := 1-1 2-1 3-1 4-1

MAIN_SRCS := $(addprefix $(SRCDIR)/main-,$(addsuffix .cpp,$(TARGETS)))
FUNC_SRCS := $(addprefix $(SRCDIR)/function-,$(addsuffix .cpp,$(TARGETS)))

MAIN_OBJS := $(MAIN_SRCS:.cpp=.o)
FUNC_OBJS := $(FUNC_SRCS:.cpp=.o)

$(EXECUTABLE): $(MAIN_OBJS) $(FUNC_OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%: $(SRCDIR)/main-%.o $(SRCDIR)/function-%.o
	$(CXX) $(CXXFLAGS) $^ -o $(EXECUTABLE)

$(SRCDIR)/main-%.o: $(SRCDIR)/main-%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(SRCDIR)/function-%.o: $(SRCDIR)/function-%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXECUTABLE) $(MAIN_OBJS) $(FUNC_OBJS)

# PHONY targets
.PHONY: all clean
