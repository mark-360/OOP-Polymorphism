# Polymorphism in C++      ### Source: https://www.youtube.com/watch?v=wN0x9eZLix4&list=WL&index=20&t=14s

## Introduction

Polymorphism is a fundamental concept in Object-Oriented Programming (OOP) that allows objects to be treated as instances of their parent class, while enabling derived classes to provide specific implementations. This allows for a single interface to be used for different underlying data types.

## Example Overview

In this example, polymorphism is demonstrated using a base class `companyEmployee` and a derived class `Employees`. The base class includes a virtual function that can be overridden by derived classes to provide specific behavior.

### Code Explanation

- **Base Class: `companyEmployee`**
  - Contains attributes like `Name`, `Age`, `ExperienceYears`, and `Type`.
  - Defines a virtual function `TypeOfWork()` to describe the type of work an employee does.

- **Derived Class: `Employees`**
  - Inherits from `companyEmployee`.
  - Overrides the `TypeOfWork()` method to provide a specific description related to the `Employees` class.

### Key Points

- **Virtual Functions:** The `TypeOfWork()` method in `companyEmployee` is declared as `virtual`. This allows derived classes to override it with their own implementation.
  
- **Dynamic Dispatch:** By using a pointer of type `companyEmployee` to refer to an `Employees` object, we can call the `TypeOfWork()` method. The overridden method in the `Employees` class is invoked, demonstrating polymorphism in action.

### Example:

```cpp
// Create an instance of Employees
Employees e1 = Employees("Mark", 19, 5, "backend", 10);

// Pointer to base class
companyEmployee * e2 = &e1;

e2->TypeOfWork(); // Calls overridden method from Employees class
