/*
 *  ShoppingTrip.c
 *  
 *
 *  Created by Jamie Atkinson on 24/10/2010.
 *  Copyright 2010 Jabbslad. All rights reserved.
 *
 */


#include <stdio.h>

// global variables. these are visible from any function.

int   totalItems  = 0;
float totalCost   = 0.0;
float salesTax    = 0.0925;

// declare the functions we're going to use.
// we don't need to declare main() because it's built in.

void addToTotal (float cost, int quantity);
float costWithSalesTax ( float price );

// this is where the program starts when it runs.

main () {
	float budget = 10000.00;
	
	// make a new line.
	printf ("\n");
	
	// set the prices of each item.
	float laptopPrice    = 1799.00;
	float monitorPrice   = 499.80;
	float phonePrice     = 199.00;
	
	// for each line item, call the addToTotal() function,
	// specifying the item and quantity.
	
	addToTotal ( laptopPrice,  2 );
	addToTotal ( monitorPrice, 1 );
	addToTotal ( phonePrice,   4 );
	
	// display a line and then the final total.
	printf ("------------\n");
	printf ("TOTAL for %i items: $%5.2f\n\n", totalItems, totalCost);
	
	if ( totalCost < budget ) {
		printf ("You came in under budget!\n\n");
		
	} else {
		printf ("You're over budget. Time to talk to finance.\n\n");
	}
}

void addToTotal (float cost, int quantity) {
	
	printf ("Adding %i items of cost $%5.2f\n", quantity, cost );
	
	// find the cost for this item by multiple cost by quantity.
	// then get the real cost by applying sales tax.
	float calculatedCost = cost * quantity;
	float realCost = costWithSalesTax ( calculatedCost );
	
	// add this amount to the total, and increase the total number
	// of items purchased.
	
	totalCost  = totalCost + realCost;
	totalItems = totalItems + quantity;
	
	printf ("Subtotal for %i items: $%5.2f\n", totalItems, totalCost);
}

float costWithSalesTax ( float price ) {
	
	// remember, 'salesTax' is a global variable.
	float taxAmount = price * salesTax;
	float subtotal  = price + taxAmount;
	
	return subtotal;
}