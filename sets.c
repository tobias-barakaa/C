#include <stdio.h>

// Function to check if an element is a member of a set
int isMember(int element, int set[], int size) {
    for (int i = 0; i < size; i++) {
        if (set[i] == element) {
            return 1; // Element is a member of the set
        }
    }
    return 0; // Element is not a member of the set
}

// Function to perform the union of two sets
void unionSets(int set1[], int size1, int set2[], int size2, int result[]) {
    int resultSize = 0;

    // Add elements from set1 to the result
    for (int i = 0; i < size1; i++) {
        result[resultSize++] = set1[i];
    }

    // Add elements from set2 to the result if they are not already present
    for (int i = 0; i < size2; i++) {
        if (!isMember(set2[i], result, resultSize)) {
            result[resultSize++] = set2[i];
        }
    }
}

// Function to print a set
void printSet(int set[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d", set[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

int main() {
    // Define two sets
    int set1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(set1) / sizeof(set1[0]);

    int set2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(set2) / sizeof(set2[0]);

    // Check if 3 is a member of set1
    if (isMember(3, set1, size1)) {
        printf("3 is a member of set1.\n");
    } else {
        printf("3 is not a member of set1.\n");
    }

    // Perform the union of set1 and set2
    int resultSet[10]; // Assuming a maximum size for the result set
    unionSets(set1, size1, set2, size2, resultSet);

    // Print the sets and the union result
    printf("Set 1: ");
    printSet(set1, size1);

    printf("Set 2: ");
    printSet(set2, size2);

    printf("Union of set1 and set2: ");
    printSet(resultSet, size1 + size2);

    return 0;
}
