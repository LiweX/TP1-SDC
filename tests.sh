#!/bin/bash

assert_equals () {
  if [ "$1" = "$2" ]; then
    echo -e "$Green $Check_Mark La calcu anda gooding and chero banchero $Color_Off"
  else
    echo -e "$Red Failed $Color_Off"
    echo -e "$Red Expected -$1- to equal -$2- $Color_Off"
    Errors=$((Errors  + 1))
    exit 1
  fi
}

test1="Decimal calculator\nSe realizara una suma decimal: 10"
response=$(./calc dec 5 + 5)
assert_equals "$response" "$test1"
