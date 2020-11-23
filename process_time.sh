#!/bin/bash

startTime=$(date +%s);

clear
printf "\n";

$1

endTime=$(date +%s);
totalTime=$(($endTime-$startTime));

printf "\n\n\n\e[37mProcess finished after $totalTime seconds\n";

exit 0;