#include "common/logger.h"
#include "core/dispatcher.h"
#include "core/event_loop.h"

int main(){
    //always use the std:: as it is the best practice
    log_info("AMF starting");
    log_error("Loop will start");

    //loop will keep running until manually stopped when running as a build in terminal
    while(true){
        EventType event=get_next_event();
        dispatch_event(event);
    }
    return 0;
}