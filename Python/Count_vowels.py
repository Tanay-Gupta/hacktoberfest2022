# Count and display number of vowels
def Check_Vow(string, vowels):
	final = [each for each in string if each in vowels]
	print(len(final))
	print(final)

string = "Hacktoberfest"
vowels = "AaEeIiOoUu"
Check_Vow(string, vowels);
