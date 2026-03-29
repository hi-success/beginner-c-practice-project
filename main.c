#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Function for the number guessing game
void numberGame() {
    int number, guess, tries = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("\n=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    do {
        printf("Enter guess: ");
        scanf("%d", &guess);

        tries++;

        if (guess > number) {
            printf("Too high\n");
        } else if (guess < number) {
            printf("Too low\n");
        } else {
            printf("Correct! You guessed it in %d tries.\n", tries);
        }

    } while (guess != number);
}

// Structure for item details
struct item {
    char Name[20];
    int Quantity;
    char Shape[30];
    char Color[20];
    int Size;
};

// Function to calculate total of quantity and size
int calculateSum(struct item x) {
    return x.Quantity + x.Size;
}

int main(void) {
    // Personal information
    char myText[] = "Esther";
    int age = 25;
    int height = 165;
    int weight = 80;

    printf("=== Personal Information ===\n");
    printf("Name: %s\n", myText);
    printf("Age: %d\n", age);
    printf("Height: %d\n", height);
    printf("Weight: %d\n", weight);
    printf("Hi %s, you will be %d next year.\n", myText, age + 1);

    // Play number guessing game
    numberGame();

    // Create item variables
    struct item s1, s2, s3, s4;

    // Assign values to s1
    strcpy(s1.Name, "Bag");
    s1.Quantity = 2;
    strcpy(s1.Shape, "Round");
    strcpy(s1.Color, "Blue");
    s1.Size = 38;

    // Assign values to s2
    strcpy(s2.Name, "Shoes");
    s2.Quantity = 3;
    strcpy(s2.Shape, "Flat");
    strcpy(s2.Color, "Brown");
    s2.Size = 48;

    // Assign values to s3
    strcpy(s3.Name, "Dress");
    s3.Quantity = 2;
    strcpy(s3.Shape, "Square");
    strcpy(s3.Color, "Green");
    s3.Size = 40;

    // Assign values to s4
    strcpy(s4.Name, "Hair");
    s4.Quantity = 4;
    strcpy(s4.Shape, "Straight");
    strcpy(s4.Color, "Black");
    s4.Size = 20;

    // Print item details
    printf("\n=== Item Inventory ===\n");

    printf("\nFirst item: %s\n", s1.Name);
    printf("Quantity: %d\n", s1.Quantity);
    printf("Shape: %s\n", s1.Shape);
    printf("Color: %s\n", s1.Color);
    printf("Size: %d\n", s1.Size);

    printf("\nSecond item: %s\n", s2.Name);
    printf("Quantity: %d\n", s2.Quantity);
    printf("Shape: %s\n", s2.Shape);
    printf("Color: %s\n", s2.Color);
    printf("Size: %d\n", s2.Size);

    printf("\nThird item: %s\n", s3.Name);
    printf("Quantity: %d\n", s3.Quantity);
    printf("Shape: %s\n", s3.Shape);
    printf("Color: %s\n", s3.Color);
    printf("Size: %d\n", s3.Size);

    printf("\nFourth item: %s\n", s4.Name);
    printf("Quantity: %d\n", s4.Quantity);
    printf("Shape: %s\n", s4.Shape);
    printf("Color: %s\n", s4.Color);
    printf("Size: %d\n", s4.Size);

    // Calculate and print results
    int result1, result2, result3, result4;

    result1 = calculateSum(s1);
    result2 = calculateSum(s2);
    result3 = calculateSum(s3);
    result4 = calculateSum(s4);

    printf("\n=== Quantity + Size Results ===\n");
    printf("%s -> %d\n", s1.Name, result1);
    printf("%s -> %d\n", s2.Name, result2);
    printf("%s -> %d\n", s3.Name, result3);
    printf("%s -> %d\n", s4.Name, result4);

    return 0;
}
