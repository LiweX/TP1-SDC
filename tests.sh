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
response1=$(./calc dec 5 + 5)
assert_equals "$response1" "$test1"

test2="The 4 arguments supplied are dec 2 - 6
Decimal calculator
Se realizara una resta decimal: -4"
response2=$(./calc dec 2 - 6)
assert_equals "$response2" "$test2"

test3="The 4 arguments supplied are bin 111 + 1
Binary calculator
Se realizara una suma binaria: 1000 ==> 8"
response3=$(./calc bin 111 + 1)
assert_equals "$response3" "$test3"

test4="The 4 arguments supplied are bin 1010 - 111
Binary calculator
Se realizara una resta binaria: 11 ==> 3"
response4=$(./calc bin 1010 - 111)
assert_equals "$response4" "$test4"

#test5="The 4 arguments supplied are bin 1010 - 1111
#Binary calculator
#Se realizara una resta binaria: 11 ==> -5"
#response5=$(./calc bin 1010 - 1111)
#assert_equals "$response5" "$test5"
