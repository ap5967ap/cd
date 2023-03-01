# class Gfg:
# 	name = None
# 	descr = None


# # initializing object
# gfg = Gfg()

# print(f"Before using setattr:\tname: {gfg.name}\tdescr: {gfg.descr}")

# # setting value using setattr
# setattr(gfg, "name", "GeeksForGeeks")
# setattr(gfg, "descr", "CS Portal")
# print(f"After using setattr:\tname: {gfg.name}\tdescr: {gfg.descr}")

# # creating new attribute using setattr
# setattr(gfg, 'value', 5)
# print(f"\nNew attribute created, gfg.value: {gfg.value}")



class Dict2Class(object):
	def __init__(self, my_dict):
		for key in my_dict:
			setattr(self, key, my_dict[key])

# Driver Code
if __name__ == "__main__":
	
	# Creating the dictionary
	my_dict = {"Name": "Geeks",
			"Rank": "1223",
			"Subject": "Python"}
	
	result = Dict2Class(my_dict)
	
	# printing the result
	print("After Converting Dictionary to Class : ")
	print(result.Name, result.Rank, result.Subject)
	print(type(result))
