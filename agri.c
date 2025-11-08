#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store farmer details
struct Farmer {
    int id;
    char name[50];
    char crop[50];
    float landArea;
    float income;
};

// Function to add new farmer details
void addFarmer() {
    FILE *fp = fopen("farmers.txt", "a"); // open file in append mode
    struct Farmer f;

    if (fp == NULL) {
        printf("\nError opening file!");
        return;
    }

    printf("\nEnter Farmer ID: ");
    scanf("%d", &f.id);
    printf("Enter Farmer Name: ");
    scanf("%s", f.name);
    printf("Enter Crop Name: ");
    scanf("%s", f.crop);
    printf("Enter Land Area (in acres): ");
    scanf("%f", &f.landArea);
    printf("Enter Annual Income: ");
    scanf("%f", &f.income);

    // Write record in text format
    fprintf(fp, "%d %s %s %.2f %.2f\n", f.id, f.name, f.crop, f.landArea, f.income);
    fclose(fp);

    printf("\nFarmer record added successfully!\n");
}

// Function to display all farmer records
void displayFarmers() {
    FILE *fp = fopen("farmers.txt", "r");
    struct Farmer f;

    if (fp == NULL) {
        printf("\n No records found!\n");
        return;
    }

    printf("\n List of Farmers:\n");
    printf("ID\tName\tCrop\tLand(Acres)\tIncome\n");
    printf("----------------------------------------------------------\n");

    // Read and print each record
    while (fscanf(fp, "%d %s %s %f %f", &f.id, f.name, f.crop, &f.landArea, &f.income) != EOF) {
        printf("%d\t%s\t%s\t%.2f\t\t%.2f\n", f.id, f.name, f.crop, f.landArea, f.income);
    }

    fclose(fp);
}

// Function to search a farmer by ID
void searchFarmer() {
    FILE *fp = fopen("farmers.txt", "r");
    struct Farmer f;
    int id, found = 0;

    if (fp == NULL) {
        printf("\nNo records found!\n");
        return;
    }

    printf("\nEnter Farmer ID to search: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %s %s %f %f", &f.id, f.name, f.crop, &f.landArea, &f.income) != EOF) {
        if (f.id == id) {
            printf("\nFarmer Found:\n");
            printf("ID: %d\nName: %s\nCrop: %s\nLand: %.2f acres\nIncome: %.2f\n",
                   f.id, f.name, f.crop, f.landArea, f.income);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\n Farmer with ID %d not found!\n", id);

    fclose(fp);
}

// Function to delete a farmer record
void deleteFarmer() {
    FILE *fp = fopen("farmers.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Farmer f;
    int id, found = 0;

    if (fp == NULL) {
        printf("\n No records found!\n");
        return;
    }

    printf("\nEnter Farmer ID to delete: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %s %s %f %f", &f.id, f.name, f.crop, &f.landArea, &f.income) != EOF) {
        if (f.id != id)
            fprintf(temp, "%d %s %s %.2f %.2f\n", f.id, f.name, f.crop, f.landArea, f.income);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    remove("farmers.txt");
    rename("temp.txt", "farmers.txt");

    if (found)
        printf("\n Farmer record deleted successfully!\n");
    else
        printf("\n Farmer ID not found!\n");
}

// Function to update an existing record
void updateFarmer() {
    FILE *fp = fopen("farmers.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    struct Farmer f;
    int id, found = 0;

    if (fp == NULL) {
        printf("\n No records found!\n");
        return;
    }

    printf("\nEnter Farmer ID to update: ");
    scanf("%d", &id);

    while (fscanf(fp, "%d %s %s %f %f", &f.id, f.name, f.crop, &f.landArea, &f.income) != EOF) {
        if (f.id == id) {
            printf("\nEnter new details:\n");
            printf("Name: ");
            scanf("%s", f.name);
            printf("Crop: ");
            scanf("%s", f.crop);
            printf("Land Area: ");
            scanf("%f", &f.landArea);
            printf("Income: ");
            scanf("%f", &f.income);
            found = 1;
        }
        fprintf(temp, "%d %s %s %.2f %.2f\n", f.id, f.name, f.crop, f.landArea, f.income);
    }

    fclose(fp);
    fclose(temp);
    remove("farmers.txt");
    rename("temp.txt", "farmers.txt");

    if (found)
        printf("\n Farmer record updated successfully!\n");
    else
        printf("\n Farmer ID not found!\n");
}

// Main function with menu
int main() {
    int choice;

    while (1) {
        printf("\n Farmer Record Management System\n");
        printf("1. Add Farmer Record\n");
        printf("2. Display All Farmers\n");
        printf("3. Search Farmer by ID\n");
        printf("4. Update Farmer Record\n");
        printf("5. Delete Farmer Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                addFarmer();
                 break;
            case 2: 
                displayFarmers(); 
                break;
            case 3: 
                searchFarmer();
                 break;
            case 4: 
                updateFarmer();
                 break;
            case 5:
             deleteFarmer();
              break;
            case 6: 
                printf("\n Exiting... Thank you!\n");
                exit(0);
            default:
                printf("\n Invalid choice! Try again.\n");
        }
    }
    return 0;
}