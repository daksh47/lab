# NO CHANGE
<?php 
// Define an array to map days of the week to background colors 
$dayColors = [ 
'Sunday' => '#ffcccb', 
'Monday' => '#ffebcd', 
'Tuesday' => '#add8e6', 
'Wednesday' => '#98fb98', 
'Thursday' => '#f0e68c', 
'Friday' => '#dda0dd', 
'Saturday' => '#c0c0c0' 
]; 
// Get the current day of the week 
$currentDay = date('l'); 
// Set a default color in case the day is not found 
$backgroundColor = '#ffffff'; // Default white color 
// Check if the current day exists in the array 
if (array_key_exists($currentDay, $dayColors)) { 
// If the day exists, set the background color based on the day 
$backgroundColor = $dayColors[$currentDay]; 
} 
?> 
<!DOCTYPE html> 
<html> 
<head> 
<title>Background Color Based on Day of the Week</title> 
<style> 
body { 
background-color: <?php echo $backgroundColor; ?>; 
} 
</style> 
</head> 
<body> 
<h1>Welcome! Today is <?php echo $currentDay; ?></h1> 
</body> 
</html> 