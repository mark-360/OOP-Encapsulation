# OOP-Encapsulation
# Encapsulation Example in C++

This repository contains a simple C++ program that demonstrates the concept of Encapsulation, a fundamental principle of Object-Oriented Programming (OOP).

## Description

Encapsulation is the practice of bundling the data (attributes) and methods (functions) that operate on the data into a single unit, known as a class. It also restricts direct access to some of an object's components, which is a means of preventing unintended interference and misuse of the data.

### How This Example Demonstrates Encapsulation

In this example, we have a class named `companyEmployees` that represents employees in a company. The class has two private member variables:
- `Age`: An integer representing the employee's age.
- `Name`: A string representing the employee's name.

These member variables are private, meaning they cannot be accessed directly from outside the class. To interact with these variables, the class provides public methods:
- `setName(string name)`: A method to set the employee's name.
- `getName()`: A method to get the employee's name.
- `setAge(int age)`: A method to set the employee's age.
- `getAge()`: A method to get the employee's age.

By using these methods, we ensure that the `Age` and `Name` variables can only be modified or accessed in a controlled manner, encapsulating the internal state of the `companyEmployees` class.
