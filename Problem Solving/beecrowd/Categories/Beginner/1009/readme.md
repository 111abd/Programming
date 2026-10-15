# Beecrowd 1009 — Salary with Bonus

A C programming solution to **Beecrowd Problem 1009: Salary with Bonus**, including the approach, code, and key concepts I learned while solving it.

## 📌 Problem Description

A seller receives a fixed monthly salary plus a commission of 15% on the total value of sales made during the month.

The task is to read the seller's name, fixed salary, and total sales, then calculate and display the seller's final salary with two decimal places.

## 🧮 Formula

Total salary is calculated using the following formula:

```
Total Salary = Fixed Salary + (Total Sales × 15%)
```

Since 15% is equivalent to `0.15`, the formula in C becomes:

```
total = salary + (sales * 0.15);
```

## 🧠 What I Learned

### 1\. Understanding `float` and `double`

Initially, I used `float` to store the salary and sales values. After reviewing the problem, I learned why choosing the appropriate data type matters.

Both `float` and `double` store floating-point numbers, but they differ in precision and memory usage.

| Feature | `float` | `double` |
| --- | --- | --- |
| Typical memory usage | 4 bytes | 8 bytes |
| Precision | About 6–7 significant decimal digits | About 15–16 significant decimal digits |
| Best suited for | Calculations where its precision is sufficient | Calculations requiring greater precision |

A `double` is called a **double-precision floating-point type** because it uses a wider floating-point representation than `float`, typically allowing it to preserve more significant digits.

For example:

```
float a = 1.123456789;
double b = 1.123456789;

printf("%.9f\n", a);
printf("%.9f\n", b);
```

Typical output:

```
1.123456836
1.123456789
```

The `float` value differs from the original decimal value because it cannot preserve as many significant digits. The `double` value preserves more digits in this example.

**My takeaway:** I should choose a data type based on the precision a problem requires. Since this problem specifies double-precision values, using `double` is appropriate.

### 2\. Understanding Format Specifiers

Another important lesson was learning that `scanf()` and `printf()` use format specifiers differently.

| Data type | `scanf()` | `printf()` |
| --- | --- | --- |
| `float` | `%f` | `%f` |
| `double` | `%lf` | `%f` |

For example:

```
float a;
double b;

scanf("%f", &a);
scanf("%lf", &b);

printf("%f\n", a);
printf("%f\n", b);
```

- In `scanf()`, `%f` reads a `float`, while `%lf` reads a `double`.
- In `printf()`, `%f` works for both `float` and `double`.
- The `&` operator passes the variable's memory address to `scanf()`, allowing the function to store the input value in that variable.

This taught me not to assume that format specifiers work identically in input and output functions.

### 3\. Understanding Double Precision

Precision refers to how many significant digits a number can represent accurately.

Computers store floating-point numbers using a binary representation. Many decimal fractions cannot be represented exactly in binary, so calculations may produce tiny rounding differences.

For example, the decimal value `0.15` does not have an exact finite binary floating-point representation.

Using `double` generally reduces precision errors compared with `float`, but it does not eliminate them entirely.

This is especially useful to understand when working with calculations involving salaries, percentages, measurements, or other decimal values.

### 4\. Calculating the Commission

The seller earns 15% of the total sales.

```
double total = salary + (sales * 0.15);
```

This line calculates the commission by multiplying sales by `0.15`, then adds the commission to the fixed salary.

For example:

```
Fixed salary = 500.00
Total sales  = 1230.30
Commission   = 1230.30 × 0.15
```

The final salary is the fixed salary plus the commission.

### 5\. Formatting Output to Two Decimal Places

The output statement is:

```
printf("TOTAL = R$ %.2f\n", total);
```

Here is what each part means:

- `TOTAL = R$ ` prints the required text, including the spaces.
- `%.2f` displays the number with two digits after the decimal point.
- `\n` moves to a new line after printing the result.

Following the exact output format is important in competitive programming because an incorrect label, missing space, or missing newline can cause a presentation or wrong-answer issue.

## 🧪 Sample Input

```
JOAO
500.00
1230.30
```

## ✅ Sample Output

```
TOTAL = R$ 684.54
```

## 📚 Key Takeaways

By solving this problem, I practiced and learned:

- Reading strings and decimal values in C.
- Choosing between `float` and `double`.
- Understanding double-precision floating-point numbers.
- Using `%f` and `%lf` correctly with `scanf()` and `printf()`.
- Calculating percentages and applying mathematical formulas.
- Formatting output to exactly two decimal places.
- Following the strict output requirements of an online judge.

## 🎯 Final Reflection

This problem was more than just a salary calculation. It helped me understand that choosing the right data type, knowing how format specifiers work, and formatting output correctly are all important parts of writing reliable C programs.

I'm documenting these small lessons as I solve programming problems to strengthen my fundamentals and track my progress as a developer.

---
