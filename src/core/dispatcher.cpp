#include "core/dispatcher.h"
#include "common/logger.h"


void handle_timer_event(){
    log_debug("TIMER EVENT triggered");
}

void handle_debug_event(){
    log_debug("DEBUG EVENT triggered");
}


void dispatch_event(EventType event){
    if(event==EVENT_TIMER) handle_timer_event();
    else if(event==EVENT_DEBUG)handle_debug_event();
}