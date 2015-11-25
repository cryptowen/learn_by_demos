all: result.txt
clean:
	rm *.txt

result.txt: a.txt b.txt
	cat a.txt b.txt > result.txt

a.txt:
	echo 'a' > a.txt

b.txt:
	echo 'b' > b.txt

