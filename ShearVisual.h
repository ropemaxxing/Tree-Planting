#include <chrono>
#include <thread>
#include <cstring>
#include <iostream>
#include "color.h"

void shears() {
    const char drop[] =
        R"(               

                       -.                     -                       
                       ++:                  .+*                       
                       ***-                :***.                      
                       +***=              =****                       
                       :****+.          .+****-                       
                        -*****-        :+****-                        
                         :+****=      -*****:                         
                           =****+.  .+****+.                          
                            -*****::+****=                            
                             :+***++***+:                             
                               =+++++++.                              
                               :++**++-                               
                              -++++++++-                              
                             =****+=****+                             
                           .+****=  -****+.                           
                         .::-=++:    .++=-:::                         
                        .:::::::      .::::::.                        
                        :::::::        :::::::                        
                       :::::.            .:::::.                      
                     .:::::.               :::::.                     
                    ::::::                  ::::::                    
                   ::::::                    .:::::                   
                 .:::::.                      .:::::.                 
                .:::::                          ::::::                
               ::::::                            ::::::               
              :::::.                              .:::::.             
            .:::::.                                 :::::.            
           .:::::                                    ::::::           
          ::::::                                      .:::::          
         :::::.                                        .:::::.        
       .:::::                                            :::::.       
      ::::::                                              ::::::      
     :::::.                                                .:::::     
    :::::.                                                   :::::    
)";

    
    int n=strlen(drop);
        for(int i=n;i>=0;i--){
            if(drop[i]==':')cout<<LIGHT_BEIGE;
            else cout<<BLUE;
            cout<<drop[i]<<RESET;

            if (drop[i] == '\n') {
                this_thread::sleep_for(chrono::milliseconds(10));
            }
        }
        cout<<endl;
            system("clear");
 
}