PROJECTNAME = libss2d.a
OUTPUT_DIR = build/ss2d

SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst src/%.cpp,$(OUTPUT_DIR)/%.o,$(SRC))

library: $(OBJ)
	ar rcs $(OUTPUT_DIR)/$(PROJECTNAME) $(OBJ)

$(OUTPUT_DIR)/%.o: src/%.cpp
	g++ -c $< -o $@ -Iinclude -Iheaders

TEST_NAME = test
TEST_OUTPUT_DIR = build/test
TEST_SRC = testprogram/driver.cpp
C_FLAGS = -Iinclude -Iheaders -Llib -lraylib -lopengl32 -lgdi32 -lwinmm -L$(OUTPUT_DIR) -lss2d

test:
	g++ $(TEST_SRC) -o $(TEST_OUTPUT_DIR)/$(TEST_NAME) $(C_FLAGS)

