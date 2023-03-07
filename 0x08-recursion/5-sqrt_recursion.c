#include "main.h"
/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
#!/usr/bin/perl

use strict;
use warnings;

sub count_loops {
    my ($n) = @_;

    if ($n == 0) {
        return 0;
    } else {
        return 1 + count_loops($n-1);
    }
}

my $num_loops = count_loops(10);
print "Number of loops: $num_loops\n";
