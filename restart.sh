## For Windows 

Stop-Process -Name "julia" -Force
sleep(5)

## For Linux OS 

ProcessID = pidof julia
kill ProcessID
sleep(5)