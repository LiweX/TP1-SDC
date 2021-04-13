#!/bin/bash

assert_equals () {
  if [ "$1" = "$2" ]; then
    echo -e "$Green $Check_Mark All test passed successfully :) $Color_Off"
  else
    echo -e "$Red Failed $Color_Off"
    echo -e "$Red Expected -$1- to equal -$2- $Color_Off"
    Errors=$((Errors  + 1))
    exit 1
  fi
}

test1="The 4 arguments supplied are dec 5 + 5
Decimal calculator
Se realizara una suma decimal: 10"
response=$(./calc dec 5 + 5)
assert_equals "$response" "$test1"
