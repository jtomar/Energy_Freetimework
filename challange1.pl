use strict;

# Read input from stdin and provide input before running code
print "Please enter your number : ";
while(my $input = <STDIN>)
{
	chomp($input);
	my $i;
	for($i=1;$i<=$input;$i++)
	{
		if(!($i%3))
		{
			if(!($i%5))
			{
				print "FizzBuzz\n";
				next;
			}
			else
			{
				print"Fizz\n";
				next;
			}
		}
		if(!($i%5))
		{
			if(!($i%3))
			{
				print "FizzBuzz\n";
				next;
			}
			else
			{
				print"Buzz\n";
				next;
			}
		}
		print $i."\n";
	}
}