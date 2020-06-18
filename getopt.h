#ifndef __libcore_spec_getopt__
#define __libcore_spec_getopt__

#include <libcore-types/types.h>

//
// Same as https://man7.org/linux/man-pages/man3/getopt.3.html
// except params are passed and not global vars
//

#define errOptFinished -1
#define errOptInvalid -2
#define errOptMissing -3

extern error                       // error code
getOptions(                        //
    int argc,                      //
    stringArray argv,              //
    string validOptions,           // list of characters, each representing a single character option
    int startIndex,                // start scan index in `argv`
    string missingOrInvalidOption  // point to the option that is invalid or missing params
);

#endif