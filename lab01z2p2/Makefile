# Requires the following project directory structure:
#  /bin
#  /obj
#  /src

# Use 'make remove' to clean up the hole project

# Name of target file
TARGET     = lab01z2p2
CXX        = clang++
CXXFLAGS   = -Weverything -Wall -Wextra -Wpointer-arith -Wcast-qual \
             -Wno-missing-braces -Wempty-body -Wno-error=uninitialized \
             -Wno-error=deprecated-declarations -Wno-unused-variable \
             -Wno-poison-system-directories -pedantic-errors -pedantic \
             -Os

LD         = clang++ -o
LDFLAGS    = -Wall -pedantic

SRCDIR     = src
OBJDIR     = obj
BINDIR     = bin

SOURCES   := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES  := $(wildcard $(SRCDIR)/*.h)
OBJECTS   := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

RM         = rm -f

$(BINDIR)/$(TARGET): init $(OBJECTS)
	@$(LD) $@ $(LDFLAGS) $(OBJECTS)
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"

.PHONY: init
init:
	@mkdir -p ./$(SRCDIR) || true
	@mkdir -p ./$(OBJDIR) || true
	@mkdir -p ./$(BINDIR) || true

.PHONY: clean
clean:
	@find . -type d -name "obj" | xargs rm -rf ;
	@find . -type d -name "bin" | xargs rm -rf ;
	@echo "Cleanup complete!"

.PHONY: remove
remove: clean
	@$(RM) $(BINDIR)/$(TARGET)
	@echo "Executable removed!"

.PHONY: run
run:
	@$(BINDIR)/$(TARGET)
