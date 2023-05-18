FLAGS = -Wall -Werror -Wextra -std=c11
FLAGS_TESTS = -lcheck -lpthread -fprofile-arcs -ftest-coverage


all: clean install tests

install: install_first open_3DV

install_first:
	mkdir build
	cd build/; qmake ../3D/3D.pro; make

open_3DV:
#	chmod 777 ./build/3D.app
#	open ./build/3D.app
#	for Linux
	chmod 777 ./build/3D
	./build/3D

uninstall:
	@echo '---UNINSTALL---'
	rm -rf build

dvi:
	@echo '---DOXYGEN---'
	doxygen
#	open ./html/index.html

dist: clean
	@echo '---RUN ARCHIVE---'
	tar -cf ./3DViewer_v1_0.tar *

tests: clean
	@echo '---RUN TESTS---'
	@gcc -g $(FLAGS) s21_parsers.c s21_rotations.c tests.c $(FLAGS_TESTS) -o test
	./test

gcov_report: tests
	@echo '---START BUILD GCOVREPORT---'
	gcov tests.c
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory report
	open report/index.html

clean:
	@echo '---CLEAN---'
	rm -rf *.o report *.info *.gcda *.gcno *.gcov *.gch *.out *.a *.dSYM test
	rm -rf html
	rm -rf build

main:
	@echo '---CREAT MAIN---'
	gcc -g $(FLAGS) main.c s21_parsers.c s21_rotations.c
	./a.out

check:
	@echo "---CLANG-FORMAT---"
	cp ../materials/linters/.clang-format ./
#	clang-format -i s21_parsers.c s21_rotations.c tests.c s21_3DViewer.h 3D/*.cpp 3D/*.h
	clang-format -n s21_parsers.c s21_rotations.c tests.c s21_3DViewer.h 3D/*.cpp 3D/*.h
	@echo "---LEAKS---"
	leaks -atExit --list -- ./test
	#echo "---CPPCHECK---"
	#cppcheck *.h *.c
