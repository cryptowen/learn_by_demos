ALL := $(shell ls * | grep _test.txt | sed 's/\(.*\)_test.txt/\1/g')

all: $(ALL)

clean:
	rm $(ALL)

%: %_test.txt
	cp $< $@
