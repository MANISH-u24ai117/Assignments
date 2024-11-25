#include <stdio.h>
#include <string.h>

// Define a structure named Item
typedef struct {
    char item_name[50];
    int quantity;
    float price;
    float amount;
} Item;

// User-defined function to read and calculate amount
void calculateAmount(Item *item) {
    // Calculate the amount
    item->amount = item->quantity * item->price;
    
    // Print item details
    printf("\nItem Details:\n");
    printf("Item Name: %s\n", item->item_name);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %.2f\n", item->price);
    printf("Amount: %.2f\n", item->amount);
}

int main() {
    Item item;

    // Input item details
    printf("Enter item name: ");
    scanf(" %[^\n]", item.item_name); // Read string with spaces
    printf("Enter quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter price: ");
    scanf("%f", &item.price);

    // Call the function to calculate and display amount
    calculateAmount(&item);

    return 0;
}
