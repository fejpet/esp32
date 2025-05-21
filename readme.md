# Start development

In VSCode first load proper workspace File->Open Workspace from file 
select esp32.code-workspace

Now start a new terminal, this will start a powershell and execute the idf initialization script


# Build a project 

cd gpioexample
idf.py build

# Flash

idf.py -p COM3 flash 
