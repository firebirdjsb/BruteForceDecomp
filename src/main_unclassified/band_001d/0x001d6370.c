/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE35CD74C74BC454ACE0E123DC1482059DBEB74BEF1964FD40CE9AA1FFBEE121
 * Entry: 0x001d6370, Ghidra index: 6350, label: FUN_001d6370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d6370(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00087940(in_EAX,0,0xffffffff);
    in_EAX = in_EAX + 0x1c;
  }
  return in_EAX;
}
