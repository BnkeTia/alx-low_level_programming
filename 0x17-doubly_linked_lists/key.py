#!/usr/bin/python3

# Initialize variables to store the largest palindrome and the corresponding factors
largest_palindrome = 0
factors = (0, 0)

# Loop through all 3-digit numbers
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        # Check if the product is a palindrome
        product_str = str(product)
        if product_str == product_str[::-1] and product > largest_palindrome:
            largest_palindrome = product
            factors = (i, j)

# Save the result to a file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))

