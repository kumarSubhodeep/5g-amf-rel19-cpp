#include <chrono>
#include <thread>
#include "core/event_loop.h"

EventType get_next_event(){
    static int counter=0;
    /* 
        std::this_thread - "The thread that is currently running this code"
        sleep_for(...) - “Pause execution for a given duration” - It blocks the thread, Nothing else runs during this time
        std::chrono::seconds(2) - This defines the duration
        std::chrono → time utilities library
        seconds(2) → duration object representing 2 seconds

        putting it together - Pause the current thread for 2 seconds
        Loop → print → sleep → print -> sleep -> ..... until ctrl + c
        */
       std::this_thread::sleep_for(std::chrono::seconds(2));

       if(counter%2==0){
        counter++;
        return EVENT_TIMER; // Fetch the next event
       } else {
        counter++;
        return EVENT_DEBUG;
       }
}