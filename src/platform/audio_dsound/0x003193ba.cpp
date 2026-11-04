/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74C5ED9F446B5D4AC7987A4218B869E4DB5A7AFADC2CC1CEA7BC23A43932E7CB
 * Entry: 0x003193ba, Ghidra index: 12221, label: FUN_003193ba
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++17 source-matched declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_00316300(int param_1);
void FUN_003193ba(int param_1)

{
  int in_ECX;
  
  FUN_00316300(param_1 * 0x20 + 0x90 + in_ECX);
  return;
}
