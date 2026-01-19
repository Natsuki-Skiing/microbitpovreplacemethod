/**
* Mannu Lambrichts
*
* Development environment specifics:
* Written in Microsoft PXT
*
* This code is released under the [MIT License](http://opensource.org/licenses/MIT).
* Please review the LICENSE.md file included with this example. If you have any questions 
* or concerns with licensing, please contact techsupport@sparkfun.com.
* Distributed as-is; no warranty is given.
*/

#include "pxt.h"
#include "MicroBit.h"
#include "MicroBitDisplayCustom.h"

using namespace pxt;
using namespace codal;

namespace extension { 

    /**
     * Take over the default display.
     */ 
    //%
    void init_display() {
		// Stop any ongoing renderings and timers
        uBit.display.stopAnimation();
        uBit.display.disable();
        uBit.display.~MicroBitDisplay();

        // Override display
        // The provided timer is unused, but needs to exist already. It doesn't matter which one you provide
        //NRFLowLevelTimer displayTimer = NRFLowLevelTimer(NRF_TIMER4, TIMER4_IRQn);
        new (&uBit.display) MicroBitDisplayCustom(uBit.systemTimer, uBit.ledMatrixMap);
    }
}