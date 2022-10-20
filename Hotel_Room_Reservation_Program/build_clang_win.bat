@echo off
clang main.c -o main.exe

main.exe < TestCase/case1_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case1_output.txt
echo -------------------- CASE 01 SUCCESSFUL

main.exe < TestCase/case2_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case2_output.txt
echo -------------------- CASE 02 SUCCESSFUL

main.exe < TestCase/case3_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case3_output.txt
echo -------------------- CASE 03 SUCCESSFUL

main.exe < TestCase/case4_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case4_output.txt
echo -------------------- CASE 04 SUCCESSFUL

main.exe < TestCase/case5_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case5_output.txt
echo -------------------- CASE 05 SUCCESSFUL

main.exe < TestCase/case6_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case6_output.txt
echo -------------------- CASE 06 SUCCESSFUL

main.exe < TestCase/case7_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case7_output.txt
echo -------------------- CASE 07 SUCCESSFUL

main.exe < TestCase/case8_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case8_output.txt
echo -------------------- CASE 08 SUCCESSFUL

main.exe < TestCase/case9_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case9_output.txt
echo -------------------- CASE 09 SUCCESSFUL

main.exe < TestCase/case10_input.txt > output.txt
diff --strip-trailing-cr output.txt TestCase/case10_output.txt
echo -------------------- CASE 10 SUCCESSFUL
