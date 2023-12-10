def is_palindrome(number):
    return str(number) == str(number)[::-1]

def largest_palindrome_product():
    largest_palindrome = 0

    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome

result = largest_palindrome_product()

# Save the result in the file
with open("102-result", "w") as file:
    file.write(str(result))

