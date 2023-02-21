CC = g++

CFLAGS = -Wall -Wextra -Werror -g
GCOV_FLAGS := -fprofile-arcs -ftest-coverage

DIR = build
TEST = test
RM := rm -rf

all: s21_matrix_oop.a test

s21_matrix_oop.a:
	mkdir -p $(DIR)
	cmake . -B $(DIR)
	$(MAKE) -C $(DIR) s21_matrix_oop

test: $(OUT)
	$(MAKE) -C $(DIR) tests

clean:
	$(RM) -rf $(DIR)

lint:
	cp ../materials/linters/.clang-format ./
	clang-format -n matrix.cc s21_matrix_oop.h
	$(RM) .clang-format


#LDFLAGS := -lgtest
#
#SOURCES:= matrix.cc
#
#OBJ_DIR := ./obj
#OBJECTS := $(addprefix obj/,$(SOURCES:.cc=.o))
#HEADER = s21_matrix_oop.h
#
#TARGET_EXEC := s21_matrix_oop.a


#$(TARGET_EXEC): create_dir mkdir -p $(OBJ_DIR)
#	ar rcs $@ $(OBJECTS)
#
#test: test/test.cc $(HEADER) $(TARGET_EXEC)
#	$(CC) $(CFLAGS) $^ -o test_test $(LDFLAGS)
#	./test_test
#
#$(OBJ_DIR)/%.o: %.cc $(HEADER)
#	@$(CC) $(CFLAGS) -c $< -o $@
#
#clean:
#	$(RM) $(OBJ_DIR)
#	$(RM) $(TARGET_EXEC)
#	$(RM) test_test*
#

#
#rebuild: clean all