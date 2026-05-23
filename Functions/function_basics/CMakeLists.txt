cmake_minimum_required(VERSION 4.2)
project(function_basics)

set(CMAKE_CXX_STANDARD 20)

add_executable(print_receipt void-printReceipt.cpp)
add_executable(calculate_tax float-calculateTax.cpp)
add_executable(is_eligible_for_loan bool_isEligibleForLoan.cpp)
