CP := gcc
CFLAGS := -Wall -Werror -Wextra -std=c11
GCOVFLAGS := -L. --coverage
OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = $(shell pkg-config --libs check) -lm
else
	CHECK_FLAGS = -lcheck
endif
SRC_BACKEND := $(wildcard backend/*.c)

all: test

install:
	- cd ..; mkdir build
	cd frontend/SmartCalc/; qmake .; make;
	cp -R frontend/SmartCalc/SmartCalc.app ../build/SmartCalc.app
	chmod +rwx ../build
	chmod +rwx ../build/SmartCalc.app
	@chmod +rwx ../build
	@chmod +rwx ../build/SmartCalc.app
	- open ../build/SmartCalc.app

uninstall:
	rm -rf ../build/*.app

clean:
	- rm -rf test .clang-format report gcov_report *.gcno *.gcda *.info
	- rm -rf backend/*.txt
	- rm -rf frontend/SmartCalc/CMakeCache.txt
	- rm -rf frontend/SmartCalc/CMakeFiles
	- rm -rf frontend/SmartCalc/Makefile
	- rm -rf frontend/SmartCalc/cmake_install.cmake
	- rm -rf frontend/SmartCalc/.qmake.stash
	- rm -rf frontend/SmartCalc/*.o
	- rm -rf frontend/SmartCalc/SmartCalc.app
	- rm -rf ../archive

dvi:

dist: install
	- rm -rf ../archive
	- mkdir ../archive
	- mkdir ../archive/SmartCalc_v1.0
	- cp -r ../build/SmartCalc.app ../archive/SmartCalc_v1.0
	- cp -r Manual ../archive/SmartCalc_v1.0
	- cd ../archive && tar cvzf Archive_SmartCalc_v1.0.tgz SmartCalc_v1.0 && rm -rf SmartCalc_v1.0

test:
	$(CP) $(CFLAGS) -o test $(SRC_BACKEND) tests/*.c $(CHECK_FLAGS)
	./test

check:
	cp ../materials/linters/.clang-format .
	clang-format -n backend/*.c backend/*.h
	make test
	CK_FORK=no leaks --atExit -- ./test

gcov_report:
	$(CP) $(CFLAGS) $(SRC_BACKEND) tests/*.c $(CHECK_FLAGS) $(GCOVFLAGS) -o $@ 
	./gcov_report
	lcov -t gcov_report -o rep.info -c -d .
	genhtml -o report rep.info
	open ./report/index.html
	rm -rf *.gcda *.gcno *.info
