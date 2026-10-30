/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4816B030FA7754413010563679EA00E7560FF3EEE066C3D98609FE8CFDB18991
 * Entry: 0x002ef306, Ghidra index: 10708, label: __ftbuf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2003 Release */

void __ftbuf(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
      __flush(param_2);
    }
  }
  else if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    __flush(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}
