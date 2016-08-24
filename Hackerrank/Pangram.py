# Enter your code here. Read input from STDIN. Print output to STDOUT
print 'pangram' if set(raw_input().lower().replace(' ', '')) == set('abcdefghijklmnopqrstuvwxyz') else 'not pangram'﻿
