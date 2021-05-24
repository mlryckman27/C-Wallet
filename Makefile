build:
	#gcc wallet.c transactions.c -g -Wall -o wallet
	gcc test.c transactions.c -g -Wall -o test		# Remove this line when testing is completed

clean:
	#rm wallet.o
	rm test.o						# Remove this line when testing is completed

