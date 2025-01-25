
# C++ Module 04: Subtype Polymorphism, Abstract Classes, and Interfaces

Welcome to the repository for **C++ Module 04**, where we explore key concepts in **object-oriented programming** using C++. This module introduces **polymorphism**, **dynamic memory management**, **deep copying**, and **abstract classes**. Each exercise builds upon the last, providing a structured approach to mastering these fundamental principles.

---

## Table of Contents
1. [Exercise 00: Polymorphism](#exercise-00-polymorphism)
2. [Exercise 01: I Don’t Want to Set the World on Fire](#exercise-01-i-dont-want-to-set-the-world-on-fire)
3. [Exercise 02: Abstract Class](#exercise-02-abstract-class)
4. [How to Compile and Run](#how-to-compile-and-run)
5. [Lessons Learned](#lessons-learned)
6. [Future Improvements](#future-improvements)

---

## **Exercise 00: Polymorphism**
### **Introduction**
This exercise introduces the fundamental concept of **polymorphism** in C++: the ability to use a base class pointer or reference to call methods of derived classes at runtime. It demonstrates how virtual functions enable dynamic method dispatch, ensuring the correct derived class behavior is executed.

We implement a base class, `Animal`, and two derived classes, `Dog` and `Cat`, each with their own version of the `makeSound` function. Additionally, `WrongAnimal` and `WrongCat` are included to highlight what happens when virtual functions are omitted—showing the limitations of static binding.

### **Key Features**
- **Polymorphism**:
  - Base class pointers (`Animal*`) are used to reference derived class objects (`Dog` and `Cat`).
  - Virtual functions ensure that the correct `makeSound` implementation is called at runtime.
- **Demonstration of Non-Polymorphic Behavior**:
  - `WrongAnimal` and `WrongCat` classes lack virtual functions, demonstrating static binding.
- **Smart Pointers**:
  - Utilized `std::unique_ptr` for memory management, preventing memory leaks without manual `delete` calls.

### **Example Output**
```plaintext
Dog
Cat
Meow! Meow!
Woof! Woof!
Woof! Woof!
WrongAnimal makes an unknown sound!
WrongAnimal makes an unknown sound!
```

---

## **Exercise 01: I Don’t Want to Set the World on Fire**
### **Introduction**
Building on **Exercise 00**, this exercise adds a `Brain` class that represents an array of ideas for `Dog` and `Cat` objects. Each `Dog` and `Cat` maintains its own unique `Brain` instance, demonstrating **dynamic memory management** and **deep copying**.

The exercise emphasizes the importance of properly managing dynamically allocated resources and ensuring deep copies of objects that contain pointers to other dynamically allocated objects.

### **Key Features**
- **Dynamic Memory Management**:
  - `Dog` and `Cat` have a private `Brain*` attribute, dynamically allocated in their constructors and properly deallocated in their destructors.
- **Deep Copy**:
  - Copy constructors and assignment operators are implemented for `Dog`, `Cat`, and `Brain` to ensure deep copying.
- **Array of Polymorphic Objects**:
  - Demonstrates polymorphism with an array of `Animal*` containing both `Dog` and `Cat` objects.
- **Memory Leak Prevention**:
  - Ensures all dynamically allocated resources are cleaned up.

### **Example Output**
```plaintext
Dog Constructor called
Brain Default Constructor called
Dog Constructor called
Brain Default Constructor called
Cat Constructor called
Brain Default Constructor called
Dog Idea 0: Chase the cat
Dog Idea 1: Bark at the mailman
Woof! Woof!
Meow! Meow!
Brain Destructor called
Dog Destructor called
Animal Destructor called
Brain Destructor called
Cat Destructor called
Animal Destructor called
```

---

## **Exercise 02: Abstract Class**
### **Introduction**
In this exercise, we refactor the `Animal` class to make it **abstract**. This ensures that `Animal` can no longer be instantiated directly, as it represents a generic concept. Instead, only specific animals like `Dog` or `Cat` can be instantiated. This change enforces design clarity and prevents misuse of the base class.

### **Key Features**
- **Abstract Class**:
  - The `Animal` class now includes a pure virtual function, `makeSound()`, making it abstract.
  - This guarantees that derived classes (`Dog` and `Cat`) implement their own version of `makeSound`.
- **Prevention of Base Class Instantiation**:
  - Attempting to create an `Animal` object now results in a compile-time error.
- **Polymorphism with Abstract Classes**:
  - Base class pointers (`Animal*`) still function correctly with derived classes, ensuring runtime polymorphism.

### **Example Output**
```plaintext
Dog Constructor called
Brain Default Constructor called
Cat Constructor called
Brain Default Constructor called
Woof! Woof!
Meow! Meow!
Brain Destructor called
Dog Destructor called
Animal Destructor called
Brain Destructor called
Cat Destructor called
Animal Destructor called
```

---

## **How to Compile and Run**
1. Clone the repository:
   ```bash
   git clone https://github.com/<your-username>/cpp-module-04.git
   ```
2. Navigate to the project directory:
   ```bash
   cd cpp-module-04
   ```
3. Compile the code using `make`:
   ```bash
   make
   ```
4. Run the executable for a specific exercise:
   ```bash
   ./ex00
   ./ex01
   ./ex02
   ```

---

## **Lessons Learned**
1. **Polymorphism**:
   - Proper use of `virtual` functions ensures correct runtime behavior.
   - Base class pointers can seamlessly interact with derived class objects.
2. **Dynamic Memory Management**:
   - Smart pointers (`std::unique_ptr`) simplify memory management and prevent leaks.
   - Manual memory management with `new` and `delete` requires careful handling.
3. **Deep Copying**:
   - Always implement copy constructors and assignment operators when a class manages dynamically allocated memory.
   - Deep copying prevents shared state and unintended side effects.
4. **Abstract Classes**:
   - Pure virtual functions enforce implementation in derived classes and prevent instantiation of incomplete objects.

---

## **Future Improvements**
- Add more detailed tests for deep copying (e.g., ensure modifying one `Dog` or `Cat` object does not affect the original).
- Explore the use of `std::shared_ptr` in place of raw pointers for advanced scenarios.
- Optimize destructors and constructors for clarity and efficiency.

---

### Summary
This README provides a structured and detailed explanation of each exercise in **C++ Module 04**, along with instructions, lessons learned, and areas for improvement. Let me know if you'd like additional sections or modifications!
