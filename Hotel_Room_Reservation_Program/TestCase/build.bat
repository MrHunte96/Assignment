echo off
HotelProj.exe < case1_input.txt > output.txt
diff --strip-trailing-cr output.txt case1_output.txt
echo -------------------- CASE 01 SUCCESSFUL

HotelProj.exe < case2_input.txt > output.txt
diff --strip-trailing-cr output.txt case2_output.txt
echo -------------------- CASE 02 SUCCESSFUL

HotelProj.exe < case3_input.txt > output.txt
diff --strip-trailing-cr output.txt case3_output.txt
echo -------------------- CASE 03 SUCCESSFUL

HotelProj.exe < case4_input.txt > output.txt
diff --strip-trailing-cr output.txt case4_output.txt
echo -------------------- CASE 04 SUCCESSFUL

HotelProj.exe < case5_input.txt > output.txt
diff --strip-trailing-cr output.txt case5_output.txt
echo -------------------- CASE 05 SUCCESSFUL

HotelProj.exe < case6_input.txt > output.txt
diff --strip-trailing-cr output.txt case6_output.txt
echo -------------------- CASE 06 SUCCESSFUL

HotelProj.exe < case7_input.txt > output.txt
diff --strip-trailing-cr output.txt case7_output.txt
echo -------------------- CASE 07 SUCCESSFUL

HotelProj.exe < case8_input.txt > output.txt
diff --strip-trailing-cr output.txt case8_output.txt
echo -------------------- CASE 08 SUCCESSFUL

HotelProj.exe < case9_input.txt > output.txt
diff --strip-trailing-cr output.txt case9_output.txt
echo -------------------- CASE 09 SUCCESSFUL

HotelProj.exe < case10_input.txt > output.txt
diff --strip-trailing-cr output.txt case10_output.txt
echo -------------------- CASE 10 SUCCESSFUL