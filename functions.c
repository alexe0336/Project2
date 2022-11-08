
#include "header.h"

 int select(int userInput){
 	if (userInput >= 0 && userInput <= 9){
 		if(userInput == 0){
 			//Exit program	
 		}else if(userInput == 1){
 			//Create an empty list
 		}else if(userInput == 2){
 			//Insert a product
 		}else if(userInput == 3){
 			//Delete a products
 		}else if(userInput == 4){
 			//Delete the entire list
 		}else if(userInput == 5){
 			//Search a product
 		}else if(userInput == 6){
 			//Display products in the list
 		}else if(userInput == 7){
 			//Purchase a product
 		}else if(userInput == 8){
 			//Sell a product
 		}else if(userInput == 9){
 			//Save to file
 		}else{
 			printf("The input needs to be a number 0-9\n");
 		}
 	}
 	return 0;
}
