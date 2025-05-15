# **Libft** 📚  
**Your own C library**  

![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)  
![GitHub last commit](https://img.shields.io/github/last-commit/yourusername/libft)  

---

## **📖 Description**  
**Libft** is a custom C library developed as part of the **42 School** curriculum. It includes reimplementations of standard C functions and additional utilities.  

---

## **🛠️ Features**  

### **Part 1: Libc Functions**  
- **Memory**: `memset`, `memcpy`, `memmove`, `memchr`, `memcmp`  
- **Strings**: `strlen`, `strdup`, `strchr`, `strrchr`, `strncmp`, `strnstr`  
- **Conversions**: `atoi`, `itoa`  
- **Character checks**: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`  

### **Part 2: Additional Functions**  
- **String manipulation**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`  
- **File I/O**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`  

---

## **🚀 Installation**  

```bash
git clone https://github.com/flotschilein/libft.git
cd libft
make
```

**Make commands:**  
- `make` → Compiles the library (`libft.a`)  
- `make clean` → Removes object files  
- `make fclean` → Removes `libft.a` + object files  
- `make re` → Recompiles everything  

---

## **📜 Example**  

```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```
**Output:**  
```
Hello, 42!
```

---

Made with ❤️ by **Florian**  


