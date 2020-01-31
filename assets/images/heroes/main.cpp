#include <bits/stdc++.h> 
#include <iostream> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
  
{ 
  	string colour[43] = { "crystalmaiden", "puck", 
                         "stormspirit", "windranger","zeus","lina",
                     	"shadowshaman", "tinker", "natureprophet", "enchantress", 
                     	"jakiro", "chen", "silencer", "ogremagi","rubick","disruptor",
                     	"kotl", "skywrathmage", "oracle", "techies", "darkwillow", 
                     	"voidspirit", "bane", "lich","lion", "witchdoctor", 
                     	"enigma", "necrophos", "warlock", "qop", "deathprophet", 
                     	"pugna", "dazzle", "leshrac", "darseer","batrider","ancientapparition"
                     	"invoker", "od","shadowdemon", "visage","winterwyvern" ,"grimstroke"}; 
    // Creating a directory 
 	for(int i = 0;i < 43; i++)
 	{
		int n = colour[i].length(); 
		// declaring character array 
	    char char_array[n + 1]; 
	  
	    // copying the contents of the 
	    // string to char array 
	    strcpy(char_array, colour[i].c_str()); 
  
		if (mkdir(char_array) == -1) 
			cerr << "Error :  "<<colour[i] << strerror(errno) << endl; 
  		else
        cout << "Directory created"; 
	}
} 