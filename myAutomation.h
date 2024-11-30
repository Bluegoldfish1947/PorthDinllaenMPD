// myAutomation.h

#include "myAliases.h"
#include "myTurnouts.h"

SEQUENCE(1)	// ID
AUTOSTART
LCD(0, " Porth Dinllaen MPD ")
LCD(4, " Porth Dinllaen MPD ")
LCD(5, "  Version  241130c ")
LCD(6, "Passwd: challenge100")
DONE

//SEQUENCE(2) // Heartbeat
//AUTOSTART
//SET(HEARTBEAT)
//DELAY(2)
//RESET(HEARTBEAT)
//DELAY(498)
//FOLLOW(2)
//DONE

SEQUENCE(200)   // Operates turnouts and signal
AUTOSTART
// check the buttons and chage the position of the turnouts etc> as required
IF(T1BUTTON)	
    IFTHROWN(T1)
        CLOSE(T1)
    ELSE
        THROW(T1)
    ENDIF
ENDIF
IF(T2BUTTON)
    IFTHROWN(T2)
        CLOSE(T2)
    ELSE
        THROW(T2)
    ENDIF
ENDIF
IF(T3BUTTON)
    IFTHROWN(T3)
        CLOSE(T3)
    ELSE
        THROW(T3)
    ENDIF
 ENDIF
IF(T4BUTTON)
    IFTHROWN(T4)
        CLOSE(T4)
    ELSE
        THROW(T4)
    ENDIF
 ENDIF
IF(T5BUTTON)
    IFTHROWN(T5)
        CLOSE(T5)
    ELSE
        THROW(T5)
    ENDIF
 ENDIF
IF(T6BUTTON)
    IFTHROWN(T6)
        CLOSE(T6)
    ELSE
        THROW(T6)
    ENDIF
 ENDIF
IF(SIGNALBUTTON)
    IFTHROWN(SIGNAL)
        CLOSE(SIGNAL)
    ELSE
        THROW(SIGNAL)
    ENDIF
 ENDIF
 // now set the LEDs to show the current state of the turnouts etc.
 IFTHROWN(T1)
    SET(T1TLED)
    RESET(T1CLED)
 ELSE
    RESET(T1TLED)
    SET(T1CLED)
 ENDIF
 IFTHROWN(T2)
    SET(T2TLED)
    RESET(T2CLED)
 ELSE
    RESET(T2TLED)
    SET(T2CLED)
 ENDIF
 IFTHROWN(T3)
    SET(T3TLED)
    RESET(T3CLED)
 ELSE
    RESET(T3TLED)
    SET(T3CLED)
 ENDIF
 IFTHROWN(T4)
    SET(T4TLED)
    RESET(T4CLED)
 ELSE
    RESET(T4TLED)
    SET(T4CLED)
 ENDIF
 IFTHROWN(T5)
    SET(T5TLED)
    RESET(T5CLED)
 ELSE
    RESET(T5TLED)
    SET(T5CLED)
 ENDIF
 IFTHROWN(T6)
    SET(T6TLED)
    RESET(T6CLED)
 ELSE
    RESET(T6TLED)
    SET(T6CLED)
 ENDIF
 IFTHROWN(SIGNAL)
    SET(SIGNALREDLED)
    RESET(SIGNALGREENLED)
 ELSE
    RESET(SIGNALREDLED)
    SET(SIGNALGREENLED)
 ENDIF
 RESET(HEARTBEAT)
 DELAY(BUTTONDELAY)
 SET(HEARTBEAT)
 FOLLOW(200)
 DONE
