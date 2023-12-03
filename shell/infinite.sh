proc () 
{
	while :
	do
		echo $1
		sleep 1
	done
}

proc p1 &
proc1_id=$!

proc p2 &
proc2_id=$!

sleep 3
echo $proc1_id $proc2_id
kill $proc2_id
kill $proc1_id



proc()
{
	while true
	do 
		sleep 2
	done
}
proc &
pid1=$!
proc & 
pid2=$!
sleep 6
kill $pid1
kill $pid2
echo "infinite process terminated"