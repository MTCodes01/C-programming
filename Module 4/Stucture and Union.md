# Structure

## Definition

A **structure** is a user-defined data type that allows you to combine different types of variables under a single name.

## Syntax

```c
struct StructureName {
    // Member variables (fields)
    dataType1 member1;
    dataType2 member2;
    // ...
};
```
## Example

### Using variable

```c
#include <stdio.h>
#include <string.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type 'struct Person'
    struct Person person1;

    // Assign values to the members of 'person1'
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 5.9;

    // Access and print the members of 'person1'
    printf("Person's Name: %s\n", person1.name);
    printf("Person's Age: %d\n", person1.age);
    printf("Person's Height: %.1f feet\n", person1.height);

    return 0;
}
```

### Using Array

```c
#include <stdio.h>
#include <string.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare an array of 'struct Person' with 3 elements
    struct Person people[3];

    // Assign values to each element of the array
    strcpy(people[0].name, "John Doe");
    people[0].age = 30;
    people[0].height = 5.9;

    strcpy(people[1].name, "Jane Smith");
    people[1].age = 25;
    people[1].height = 5.5;

    strcpy(people[2].name, "Mike Johnson");
    people[2].age = 35;
    people[2].height = 6.1;

    // Access and print the members of each person in the array
    for (int i = 0; i < 3; i++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.1f feet\n", people[i].height);
        printf("\n");
    }

    return 0;
}
```

# Union

## Definition

A **union** is a user-defined data type that allows storing different data types in the same memory location. Unlike structures, where each member has its own memory space, all members of a union share the same memory space.

## Syntax

```c
#include <stdio.h>

// Define a union named 'Data'
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};
```

## Example

### Using variable

```c
#include <stdio.h>
#include <string.h>

// Define a union named 'Data'
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    union Data data;

    // Assigning values to union members
    data.intValue = 10;
    printf("intValue: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("floatValue: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Union Example");
    printf("stringValue: %s\n", data.stringValue);

    // Accessing members after assigning values
    printf("After assigning:\n");
    printf("intValue: %d\n", data.intValue);
    printf("floatValue: %.2f\n", data.floatValue);
    printf("stringValue: %s\n", data.stringValue);

    // Size of union
    printf("Size of union Data: %lu bytes\n", sizeof(data));

    return 0;
}
```

### Using Array

```c
#include <stdio.h>
#include <string.h>

// Define a union named 'Data'
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Declare an array of 'union Data' with 3 elements
    union Data dataArray[3];

    // Assign values to each element of the array
    dataArray[0].intValue = 10;
    dataArray[1].floatValue = 3.14;
    strcpy(dataArray[2].stringValue, "Union Example");

    // Access and print the members of each element in the array
    for (int i = 0; i < 3; i++) {
        printf("Element %d:\n", i + 1);
        printf("intValue: %d\n", dataArray[i].intValue);
        printf("floatValue: %.2f\n", dataArray[i].floatValue);
        printf("stringValue: %s\n", dataArray[i].stringValue);
        printf("\n");
    }

    return 0;
}
```