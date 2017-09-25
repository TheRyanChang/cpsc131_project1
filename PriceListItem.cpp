#include "PriceListItem.h"

PriceListItem::PriceListItem(const string &itemName, const string &code, double price, bool taxable) {
	// TO BE COMPLETED
	//initialization parameters
	ItemName = itemName;
	ItemCode = code;
	ItemPrice = price;
	ItemTax = taxable;
}

PriceListItem::PriceListItem() {
	// TO BE COMPLETED
	//default constructor
	ItemName = "Apples";
	ItemCode = 1000;
	ItemPrice = 1.29;
	ItemTax = true;

}

string PriceListItem::getItemName() {
	// TO BE COMPLETED
	return ItemName;
}

string PriceListItem::getCode() {
	// TO BE COMPLETED
	return ItemCode;
}

double PriceListItem::getPrice() {
	// TO BE COMPLETED
	return ItemPrice;
}

bool PriceListItem::isTaxable() {
	// TO BE COMPLETED
	return ItemTax;
}

