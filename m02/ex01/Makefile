# Compiler
CXX := clang++
CXXFLAGS := -Wall -Werror -Wextra -std=c++17

# Executable name
TARGET := eval_expr

# Source files
SRCS := Fixed.cpp eval_expr.cpp
HDRS := Fixed.hpp Eval.hpp
OBJS := $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Linking step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation step
%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule (removes both the executable and object files)
clean:
	rm -f $(OBJS) $(TARGET)

# Force recompilation by cleaning first
rebuild: clean all

# Run tests
test: all
	./test.sh

# Phony targets to prevent conflicts
.PHONY: all clean rebuild test
