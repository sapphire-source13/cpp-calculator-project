# cpp-calculator-project
Just a fun calculator for a school project  ^_^
## Description

This project is a simple command-line calculator implemented in C++. It allows users to perform basic arithmetic operations (addition, subtraction, multiplication, and division). The program was developed as part of a Programming Language course to demonstrate fundamental C++ programming concepts such as variables, input/output, loops, conditional statements, functions, and error handling using `try-catch` blocks.

## Technologies Used

*   C++

## How to Build and Run

1.  **Prerequisites:** Make sure you have a C++ compiler (like g++) installed on your system.
2.  **Clone the repository:**
    ```bash
    git clone [your repository URL]
    cd cpp-calculator-project
    ```
3.  **Compile:** Open your terminal or command prompt, navigate to the project directory, and compile the code:
    ```bash
    g++ Calculator.cpp -o Calculator
    ```
4.  **Run:** Execute the compiled program:
    ```bash
    ./Calculator
    ```

## Reflection

### Project Summary

The goal of this project was to create a command-line calculator in C++ that could perform basic arithmetic operations. This project served as a practical application of fundamental C++ concepts, including input/output, variables, data types, operators, control flow (loops and conditional statements), functions, error handling, and basic input validation.

### What I Did Well

*   **Modular Design:** I successfully refactored the code to use functions (e.g., `add`, `subtract`, `multiply`, `divide`). This significantly improved the code's organization, readability, and maintainability.
*   **Error Handling:** I implemented error handling using `try-catch` blocks to gracefully handle exceptions like division by zero and invalid operator input. This makes the program more robust.
*   **Input Validation:** I added a loop to ensure the user enters valid numeric input, preventing potential crashes or unexpected behavior.
*   **Clear Prompts and Output:** The program provides clear prompts to guide the user and displays the results in an understandable format.

### Areas for Enhancement

*   **Further Input Validation:** While basic input validation is in place, it could be further enhanced to handle more complex input scenarios or edge cases. For instance, it currently doesn't prevent the user from entering extremely large numbers that might cause overflow issues.
*   **More Advanced Operations:** The calculator could be expanded to include more advanced mathematical functions (e.g., exponents, roots, trigonometric functions).
*   **User Interface:** The current interface is command-line based. A graphical user interface (GUI) could be explored to make the calculator more user-friendly.

### Challenges Faced

*   **Implementing Robust Input Validation:** Initially, I found it challenging to implement the input validation loop correctly. Understanding how `cin.fail()`, `cin.clear()`, and `cin.ignore()` work together took some experimentation and research. I consulted C++ documentation and online forums to gain a clearer understanding of these functions.
*   **Refactoring into Functions:** Breaking down the original code into separate functions required careful consideration of how to pass data between functions and how to structure the program's logic.
*   **Error Handling with Exceptions:** Learning how to use `try-catch` blocks and `throw` exceptions was a new concept for me. I found the C++ documentation on exception handling very helpful in understanding how to use these mechanisms effectively.

### Tools and Resources Added to My Network

*   **C++ Documentation:** The official C++ documentation (cppreference.com) became an invaluable resource for understanding language features, standard library functions, and best practices.
*   **Stack Overflow:** Stack Overflow proved to be a useful platform for finding solutions to specific coding challenges and getting insights from experienced programmers.

### Transferable Skills

*   **Modular Programming:** The experience of refactoring the code into functions has reinforced the importance of modular design. This skill is highly transferable to larger projects, making them easier to manage, debug, and maintain.
*   **Error Handling and Exception Handling:** Implementing `try-catch` blocks has given me a solid foundation in handling errors gracefully, which is crucial for writing robust and reliable software.
*   **Input Validation:** The need for input validation in this project highlighted its importance in preventing unexpected program behavior and security vulnerabilities. This is a fundamental skill applicable to any project that involves user input.
*   **Debugging:** Debugging this project, especially the input validation and error handling parts, further developed my debugging skills. These skills will be essential for identifying and fixing issues in future projects.
*   **Problem Decomposition:** Breaking down the calculator problem into smaller, manageable functions (addition, subtraction, etc.) is a core problem-solving skill applicable to a wide range of programming tasks.

### Maintainability, Readability, and Adaptability

*   **Functions:** The use of functions greatly enhances the program's maintainability. Each function has a specific purpose, making it easier to understand and modify individual parts of the code without affecting others.
*   **Comments:** I have included comments throughout the code to explain the purpose of each section and any complex logic.
*   **Meaningful Variable Names:** Using descriptive variable names (e.g., `op1`, `op2`, `operation`, `result`) improves the code's readability.
*   **Consistent Formatting:** Consistent indentation and spacing make the code easier on the eyes and help to visually delineate code blocks.
*   **Error Handling:** The `try-catch` mechanism makes the program more adaptable to unexpected situations (like invalid input or division by zero) without crashing.

### Relation to Course Concepts

This project provided practical experience with several key C++ concepts covered in the course:

*   **Basic Syntax:** Variables, data types ( `int`, `char`, `double`), operators (+, -, \*, /), input/output (`cin`, `cout`).
*   **Control Flow:** `if-else` statements (transformed into a `switch` statement), `while` loops.
*   **Functions:** Defining and calling functions, passing arguments, returning values.
*   **Error Handling:** Using `try-catch` blocks to handle exceptions.
*   **Input Validation:** Using `cin.fail()`, `cin.clear()`, and `cin.ignore()` to ensure valid input.

### Future Learning Goals

*   **Advanced Input Validation:** I want to learn more about advanced input validation techniques to make my programs even more robust.
*   **Exception Handling:** I want to delve deeper into exception handling, including creating custom exception types.
*   **GUI Programming:** I'd like to explore GUI programming in C++ to create more user-friendly interfaces.
*   **Object-Oriented Programming:** While not directly applied in this project, I see how object-oriented principles could be used to create a more sophisticated calculator (e.g., a `Calculator` class).

## Author

sapphire-source13
