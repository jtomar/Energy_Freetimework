temp_list = []
comp_list = []
temp_list = "{0:b}".format(n)
for bit in temp_list:
    if(bit == 0):
        comp_list.append(1)
    elif(bit == 1):
        comp_list.append(0)
    else:
            pass
join(comp_list, '')
print(comp_list)