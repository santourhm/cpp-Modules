#!/bin/bash

# Path to your eval_expr program
EVAL_PROGRAM="./cmp"

EPSILON=0.00390625

# List of test expressions
TEST_CASES=(
    "3 + 5 * 2 / (4 - 1)"
    "10 / 3"
    "2.5 * 4 + 1.2"
    "(10 + 2) * (3 - 1)"
    "5 - 3 + 8 / 2"
    "7.5 + 2.5 - 1.2 * 3"
    "100 / (4 + 1) * 2"
    "3.14 * 2.71"
    "0.5 + 0.25 * 4"
    "42"
)

# Function to compute absolute difference
abs_diff() {
    echo "scale=6; sqrt(($1 - $2) * ($1 - $2))" | bc -l
}

# Run tests
echo "Running tests..."
for expr in "${TEST_CASES[@]}"; do
    # Run your eval_expr program
    eval_output=$($EVAL_PROGRAM "$expr")

    # Run bc for reference
    bc_output=$(echo "$expr" | bc -l)

    # Compute absolute difference
    diff=$(abs_diff "$eval_output" "$bc_output")

    # Print results
    echo "Expression: $expr"
    echo "Your Output: $eval_output"
    echo "Expected Output: $bc_output"

    # Compare results using bc
    if (( $(echo "$diff < $EPSILON" | bc -l) )); then
        echo -e "\e[32m✅ Test Passed\e[0m"
    else
        echo -e "\e[31m❌ Test Failed\e[0m"
    fi
    echo "-----------------------------"
done
