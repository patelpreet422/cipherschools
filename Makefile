CXX = g++
CXXFLAGS = -std=c++17 -O2
DEBUGFLAGS = -DDEBUG -g3 -Wall -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -fsanitize=address -fsanitize=undefined -fsanitize=leak -fno-sanitize-recover=all -fstack-protector -D_FORTIFY_SOURCE=2

FILES = $(wildcard *.cpp)
FILES_BASE = $(basename $(FILES))

DEBUG = true
ifeq ($(DEBUG), true)
	CXXFLAGS += $(DEBUGFLAGS)
endif


help:
	@echo "Select one target from below"
	@echo "1) rm_input"
	@echo "2) rm_result"
	@echo "3) rm_output"
	@echo "4) rm_src"
	@echo "5) rm_executable"
	@echo "6) rm_all"
	@echo "7) all"
	@echo "8) filename without .cpp extension"

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

all:
	for i in "$(FILES_BASE)"; \
	do 	\
		echo $$i \
	done \

rm_input:
	rm -rf *.in

rm_result:
	rm -rf *.res

rm_output:
	rm -rf *.out

rm_src:
	rm -rf *.cpp

rm_executable:
	rm -rf $(basename $(wildcard *.cpp))

rm_all: rm_src rm_executable rm_input rm_output rm_result 

.PHONY:	all rm_executable rm_output rm_result rm_input rm_all
