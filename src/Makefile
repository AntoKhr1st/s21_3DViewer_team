CC = gcc
CFLAGC =  -Wall -Werror -Wextra  -std=c11
SOURCES = s21_3DV.c unit_test.c
OBJECTS = s21_3DV.o

# ==== для работы в обоих системах бунту и макОС ===============
UNAME = $(shell uname -s)
ifeq ($(UNAME),Darwin)
	CHECK_OS = -lcheck -lm -lpthread
endif
ifeq ($(UNAME),Linux)
	CHECK_OS = -pthread -lcheck_pic -pthread -lrt -lm -lsubunit
# -lcheck -lm -lpthread -lrt -lsubunit	
endif
# ==============================================================

all: build static tests

build:
	$(CC) $(CFLAGC) -c $(SOURCES)

static:
	@echo '---CREAT_LIB---'

tests:
	@echo '---TESTS---'

gcov_report:
	@echo '---GCOV_REPORT---'

install:
	@echo '---INSTALL---'

uninstall:
	@echo '---UNINSTALL---'
	rm -rf build*

dvi:
#	doxygen Doxyfile
#	open html/index.html

dist:
	@echo '---ZIP---'

clean:
	@echo '---CLEAN---'

rebuild: clean all

check:
	clang-format -n *.c *.h
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
#	leaks -atExit -- ./test
#	valgrind