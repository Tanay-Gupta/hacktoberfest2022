import re  # Import the re module


def mask_cc_number(cc_string, digits_to_keep=4, mask_char='*'): # Define 'cc_string_total' to hold the total of the characters in the string.
   cc_string_total = sum(map(str.isdigit, cc_string)) # 

   if digits_to_keep >= cc_string_total:   # Check if digits_to_keep >= cc_string_total is true and provide an error message.
       print("Not enough numbers. Add 10 or more numbers to the credit card number.")

   digits_to_mask = cc_string_total - digits_to_keep # Define digits_to_mask as the difference between cc_string_total and digits_to_keep
   masked_cc_string = re.sub('\d', mask_char, cc_string, digits_to_mask) # Define masked_cc_string as the value of the regex sub() function call

   return masked_cc_string # Return the value of masked_cc_string


print(mask_cc_number("5678 9826 4026 7800"))
print(mask_cc_number("5678 982& 4026 7800"))
print(mask_cc_number("5678 9826 40p6 7800"))
