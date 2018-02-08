TARGET=gomez_p1

#
# Specifiy the target
all:	$(TARGET)

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
$(TARGET):	$(TARGET).cpp
	g++  $(TARGET).cpp -Wall -o  $(TARGET) 

# Specify how the object files should be created from source files

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f $(TARGET)

run:	$(TARGET)
	./$(TARGET)
