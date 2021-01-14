OBJECTS = 
CFLAGS = -g -Wall -O3 --std=c11
LDLIBS= -l criterion -lm
INCLUDES=./include
SOURCE= ./src
TESTS=./tests
BIN= ./bin
CC=clang

all: student_test_se1 test_se1

student_test_se1: $(SOURCE)/se1.c $(SOURCE)/student_test_se1.c
	$(CC) $(CFLAGS) $(SOURCE)/se1.c $(SOURCE)/student_test_se1.c -o $(BIN)/$@ -I $(INCLUDES) $(LDLIBS)

test_se1: $(TESTS)/test_se1.c $(SOURCE)/se1.c
	$(CC) $(CFLAGS) $(TESTS)/test_se1.c $(SOURCE)/se1.c  -o $(BIN)/$@ -I $(INCLUDES) $(LDLIBS)

gen_score: test_se1
	-bin/test_se1 --json > results.log 2> results.json
	python3 tests/grader.py

clean:
	rm -f results.json results.log
	rm -f $(BIN)/student_test_se1 $(BIN)/test_se1
	rm -rf $(BIN)/*.dSYM
