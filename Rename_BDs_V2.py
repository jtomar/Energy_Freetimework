######################################## BD Rename Script ########################################################
#
#Description :  This script removes unwanted text from BD names. 
#
# Revision History : 
# Release		Release_Date 		Author		            Description/Enchancements
#	V1.0		 8/5/2017	   	Jitendra Tomar	   	Designed and Developed by : jtomar@qti.qualcomm.com
#
#################################################################################################################

import os, sys, re
BD_path = sys.argv[1]
print ("Waveforms path : " + BD_path)

path_list = []
path_list  = BD_path.split("\\")
flag = sys.argv[2]
print(flag)
sheet_name = []

for filename in (os.listdir(BD_path)):
	print (filename)
	new_name = filename.replace(flag, "")
	#print new_name
	os.rename(os.path.join(BD_path, filename), os.path.join(BD_path, new_name))

print("\n======= Done Enjoy ==========")
