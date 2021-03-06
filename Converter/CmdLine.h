#ifndef CmdLine_h_already_included__12_03_2015__FF2C3B2
#define CmdLine_h_already_included__12_03_2015__FF2C3B2
//
// SeVlaT, 12.03.2015
//

#include "Options.h"

// /I  <string> Input file
// /IS <char>   Input separator
// /IQ <char>   Input quote

// /O  <string> Output file
// /OS <char>   Output separator
// /OQ <char>   Output quote

// /PQ          Pad missing quotes

// /EW          Escape if begins or ends with whitespace
// /EA          Escape always

// /L <int>     Align left int Width
// /N           No alignment

template <typename CH>
class TCmdLine {
 public:
  typedef const CH* TPChar;

 public:
  bool Parse(      int           argc,
             const TPChar       *argv,
                   TOptions<CH> &Options);

  bool Parse(const CH           *szCmdLine,
                   TOptions<CH> &Options);
};

#endif
