Polymorphism in C++
Overview
Polymorphism is a core principle of Object-Oriented Programming (OOP) that allows objects to be treated as instances of their parent class while providing specific behaviors in derived classes. This concept enables a single function or method to operate differently based on the type of object that invokes it.

How It Works
In this example, we illustrate polymorphism using a base class and a derived class:

Base Class (companyEmployee): This class includes basic attributes such as Name, Age, ExperienceYears, and Type. It defines a virtual method TypeOfWork() to describe the type of work an employee does.

Derived Class (Employees): Inherits from companyEmployee and overrides the TypeOfWork() method to provide a more detailed description specific to the Employees class. This demonstrates how derived classes can extend or modify the behavior defined in base classes.

Key Concepts
Virtual Functions: The TypeOfWork() method is declared as virtual in the base class, allowing derived classes to override it with their specific implementations.

Dynamic Dispatch: By using a base class pointer (companyEmployee *) to refer to a derived class object (Employees), we can call the TypeOfWork() method through the base class pointer. Polymorphism ensures that the overridden method in the derived class is executed, demonstrating dynamic method binding.

Example Usage
Create an instance of the Employees class.
Use the base class pointer to call the TypeOfWork() method.
Observe how the method in the derived class is executed, showcasing polymorphism.
