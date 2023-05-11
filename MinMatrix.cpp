def create_matrix(rows, cols):
    matrix = []
    for _ in range(rows):
        row = []
        for _ in range(cols):
            element = int(input("Enter element: "))  # You can modify this to take input from the user or use a different method to populate the matrix.
            row.append(element)
        matrix.append(row)
    return matrix

def print_matrix(matrix):
    for row in matrix:
        for element in row:
            print(element, end=" ")
        print()

#Example usage:
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))

matrix = create_matrix(rows, cols)

print("Matrix:")
print_matrix(matrix)
