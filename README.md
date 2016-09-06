# stm32-Visual-Studio-Code-template
NOTE: This template is created to allow coding in vscode with intellisense enabled. compiling / debugging etc is up to you, but I also included a KEIL project inside which you can use for that.

This is a workaround I managed to get working. I threw stdperiph and cmsis libraries in the folder and added their paths to vscode's c_cpp_properties.json. I don't know much about stm32 tho but this just works.

Open this folder with VSCode. main.c is in the /src (some library files are in there as well so it is a little messy but I am too lazy to fix it. If you help organising things you are welcome as a contributor)
There is also a KEIL folder where there is an existing project which you can use to compile and debug your program. just copy contents of main.c between and copy library files to inc and src folders it should work.


# why this template? Why vscode?
Because on high-dpi displays KEIL will screw your eyes with its use of outdated UI APIs. Besides, vscode is my fav editor I use many extensions its way more useful anyways.


# do I have to do anything further to get this shit working?
Only one:
Install this extension in vscode so you get better c/c++ intellisense: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools

# are you a visual studio fan?
No. I have a macbook :P


If you have any ideas / fixes or whatever, submit a pull request, you are welcome.