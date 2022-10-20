gcc -D COMPILE_C99 main.c -o main

./main < case1_input.txt > output.txt
diff --strip-trailing-cr output.txt case1_output.txt
echo -------------------- CASE 01 SUCCESSFUL

./main < case2_input.txt > output.txt
diff --strip-trailing-cr output.txt case2_output.txt
echo -------------------- CASE 02 SUCCESSFUL

./main < case3_input.txt > output.txt
diff --strip-trailing-cr output.txt case3_output.txt
echo -------------------- CASE 03 SUCCESSFUL

./main < case4_input.txt > output.txt
diff --strip-trailing-cr output.txt case4_output.txt
echo -------------------- CASE 04 SUCCESSFUL

./main < case5_input.txt > output.txt
diff --strip-trailing-cr output.txt case5_output.txt
echo -------------------- CASE 05 SUCCESSFUL

./main < case6_input.txt > output.txt
diff --strip-trailing-cr output.txt case6_output.txt
echo -------------------- CASE 06 SUCCESSFUL

./main < case7_input.txt > output.txt
diff --strip-trailing-cr output.txt case7_output.txt
echo -------------------- CASE 07 SUCCESSFUL

./main < case8_input.txt > output.txt
diff --strip-trailing-cr output.txt case8_output.txt
echo -------------------- CASE 08 SUCCESSFUL

./main < case9_input.txt > output.txt
diff --strip-trailing-cr output.txt case9_output.txt
echo -------------------- CASE 09 SUCCESSFUL

./main < case10_input.txt > output.txt
diff --strip-trailing-cr output.txt case10_output.txt
echo -------------------- CASE 10 SUCCESSFUL