<a name="readme-top"></a>


<div align="center">
  

  <h3><b></b></h3>

</div>

<!-- TABLE OF CONTENTS -->

# 📗 Table of Contents

- [📗 Table of Contents](#-table-of-contents)
- [📖 Catalog of Things ](#-catalog-of-things-)
  - [🛠 Built With ](#-built-with-)
    - [Tech Stack ](#tech-stack-)
    - [Key Features ](#key-features-)
  - [💻 Getting Started ](#-getting-started-)
    - [Prerequisites](#prerequisites)
    - [Setup](#setup)
    - [Install](#install)
    - [Usage](#usage)
  - [👥 Authors ](#-authors-)
  - [🤝 Contributing ](#-contributing-)
  - [⭐️ Show your support ](#️-show-your-support-)
  - [🙏 Acknowledgments ](#-acknowledgments-)
  - [📝 License ](#-license-)

<!-- PROJECT DESCRIPTION -->

# 📖 Catalog of Things <a name="about-project"></a>

> In this project,  I created an Implemention of the  piecewise recurrence relation in the 3 different ways and Explained the differences (advantages, disadvantages) between the 3.
## 🛠 Built With <a name="built-with"></a>

### Tech Stack <a name="tech-stack"></a>

> Tech stack and relevant sections that apply to the project.

<details>
  <summary>C</summary>
  <ul>
    <li><a href="https://en.wikipedia.org/wiki/C_(programming_language)">C</a></li>
  </ul>
</details>


<!-- Features -->

### Key Features <a name="key-features"></a>


- **piecewise recurrence relation**
- **fibonacci solution used**
- **Comparing solutions  made.**

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->

## 💻 Getting Started <a name="getting-started"></a>

To get a local copy up and running, follow these steps.

### Prerequisites

- Language: C
- Compiler: GCC (GNU Compiler Collection)

### Setup

Clone this repository to your desired folder:


  cd my-folder
  git clone https://github.com/Shedrack-Sunday/Bitnine-Test-Backend-2


## How to Compile

# Fibonacci Recurrence Relation - C Implementation

This project provides three different implementations of the Fibonacci recurrence relation in C programming language. The Fibonacci sequence is defined as F(n) = F(n-3) + F(n-2), with initial values F(0) = 0, F(1) = 1, and F(2) = 2.

## Development Environment

The source code for this project was developed and tested using the following environment:

- Operating System: [Specify the operating system you used, e.g., Windows 10, macOS Mojave, Ubuntu 20.04]
- Compiler: [Specify the compiler and version, e.g., GCC 9.3.0, Clang 12.0.0]

## Compilation

To compile the source code, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the source code files.

For the recursive implementation:
3. Run the following command:
   ```
   gcc recursive_fibonacci.c -o recursive_fibonacci
   gcc iterative_fibonacci.c -o iterative_fibonacci
   gcc memoization_fibonacci.c -o memoization_fibonacci
   ```
## Execution   
```
./recursive_fibonacci
./iterative_fibonacci
./memoization_fibonacci
```

## Comparing solutions:

### Recursive Method:

Advantages include a natural and intuitive representation of the issue.
Simple to comprehend and use.
The method is inefficient for large values of n since it repeatedly calculates the same Fibonacci numbers.
cons: Due to redundant calculations, it has a time complexity that is exponential, O(2n).

### Looping Iterative Process:

Benefits: More effective than the recursive method.
Without repeating calculations, it iteratively calculates Fibonacci numbers.
It is O(n) linearly complex in time.

Cons: The code could be a little bit more complicated than with the recursive method.
Not as simple to understand the problem as the recursive method.

### Memorization Technique:

Benefits: Effective for large values of n because it stores previously calculated Fibonacci numbers in an array to prevent repeated calculations.
It has an O(n)-like linear time complexity.


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- AUTHORS -->

## 👥 Authors <a name="authors"></a>


👤 **Didier Peran Ganthier**

- GitHub: [@Shedrack-Sunday](https://github.com/hedrack-Sunday)
- Twitter: [@didierganthier_](https://twitter.com/DeleSundayS)
- LinkedIn: [Shedrack Bamidele Sunday](https://linkedin.com/in/Shedrack-Sunday)


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- CONTRIBUTING -->

## 🤝 Contributing <a name="contributing"></a>

Contributions, issues, and feature requests are welcome!

Feel free to check the [issues page](../../issues/).

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- SUPPORT -->

## ⭐️ Show your support <a name="support"></a>


If you like this project and want to support it, please give it a ⭐️!

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- ACKNOWLEDGEMENTS -->

## 🙏 Acknowledgments <a name="acknowledgements"></a>


I would like to thank: Bitnine for the this opptortunity to intern 

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- LICENSE -->

## 📝 License <a name="license"></a>

This project is [MIT](./MIT.md) licensed.

<p align="right">(<a href="#readme-top">back to top</a>)</p>