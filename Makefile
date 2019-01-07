# universal-makefile
# get it here: https://github.com/fedorenchik/universal-makefile.git
# git clone https://github.com/fedorenchik/universal-makefile.git
c_cpp_wildcards := *.c *.cpp *.cc *.c++ *.cxx *.C
most_recent_source := $(shell ls -At $(wildcard $(c_cpp_wildcards)) | head -1)

.DEFAULT_GOAL := $(basename $(most_recent_source))

BOOST_LIBS += -lboost_filesystem -lboost_system -lboost_regex

CPPFLAGS += -I.
CFLAGS += -pthread -Wall -Wextra -ggdb3 -O0
CXXFLAGS += -std=c++1z $(CFLAGS)
LDFLAGS += -rdynamic -pthread
LDLIBS += -pthread -lm $(BOOST_LIBS)

binaries := $(basename $(wildcard $(c_cpp_wildcards)))

all: $(binaries)

clean:
	rm -f $(binaries)

help:
	@echo 'make            build most recent source ($(most_recent_source))'
	@echo 'make <prog>     build prog.c[c|pp|xx|++]|C?'
	@echo 'make all        build all sources'
	@echo 'make clean      remove all binaries'
	@echo 'make help       show this help'

test:


%: %.c++
	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@

.PHONY: all clean help test