# NO CHANGE
<?php 
$count = 0; 
$num = 2; 
echo "<h3>Prime numbers from 1 to 50: </h3>"; 
echo "\n"; 
while ($count < 15 ) 
{ 
$div_count=0; 
for ( $i=1; $i<=$num; $i++) 
{ 
if (($num%$i)==0) 
{ 
$div_count++; 
} 
} 
if ($div_count<3) 
{ 
echo $num." , "; 
$count=$count+1; 
} 
$num=$num+1; 
} 
?> 
<?php 
$num = 0; 
$n1 = 0; 
$n2 = 1; 
echo "<h3>Fibonacci series for first 12 numbers: </h3>"; 
echo "\n"; 
echo $n1.' '.$n2.' '; 
while ($num < 10 ) 
{ 
$n3 = $n2 + $n1; 
echo $n3.' '; 
$n1 = $n2; 
$n2 = $n3; 
$num = $num + 1; 
} 
?> 