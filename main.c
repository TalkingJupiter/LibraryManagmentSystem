#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct library{  // Define the library data structure
    char book_name[20];
    char author[20];
    int pages;
    float price;
};

int main(){
    struct library lib[100];

    char auth_nm[30], book_nm[30];
    int i,input,count;
    
    i = input = count = 0;

    while(input != 5){
         printf("\n\n*********####"
                " WELCOME TO THE LIBRARY SYSTEMS "
	        "####*********\n");
         printf("\n\n1. Add book information\n2.Display book information\n3. List all books of given author\n4. List the count of the books in the library\n5. Exit");

         printf("\n\nEnter one of the above: ");
	 scanf("%d", &input);
	
	 switch(input){ //Process the inputs
	
	    case 1:   // Add a book
	       printf("Enter a book name: ");
	       fgets(lib[i].book_name, sizeof(lib[i].book_name), stdin);

	       printf("Enter an author name: ");
	       fgets(lib[i].author, sizeof(lib[i].author), stdin);

	       printf("Enter pages: ");
	       scanf("%d", &lib[i].pages);
	       getchar();

	       printf("Enter a price: ");
	       scanf("%f", &lib[i].price);
	       getchar();

	       count++;


	       break;

	    case 2: //Provide the book information
	       printf("You have entered the following book\n");

	       for(i=0; i < count; i++){
	       	  printf("Book name: %s", lib[i].book_name);
		  printf("\t Author name: %s", lib[i].author);
		  printf("\t Pages: %d", lib[i].pages);
		  printf("\t Price: %f", lib[i].price);
	       }
	       break;

	    case 3: //Author name as input
	       printf("Enter the author name: ");
	       scanf("%s", auth_nm);

	       for(i=0; i<count; i++){
	          if(strcmp(auth_nm, lib[i].author) == 0){
		     printf("%s %s %d %f", lib[i].book_name, lib[i].author, lib[i].pages, lib[i].price);
		  }
		  break;
	       }

	    case 4:   // Total # of books
	       printf("\n Number of books in library: %d", count);
	       break;

	    case 5:   // Exit
	       exit(0);

	 }
    }
    return 0;

}
