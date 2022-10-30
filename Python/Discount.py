bill = int(input("Enter bill amount:"))
discount = int(input("Enter discount percentage:"))
output = bill - (bill * discount / 100)
print("After discount your bill is: ", output)