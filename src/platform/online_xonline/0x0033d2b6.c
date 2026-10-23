/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AC4422740E0F884D72220CE2803EBFA6F12AF9D67E331F0F01B533FCA3700F4
 * Entry: 0x0033d2b6, Ghidra index: 12576, label: FUN_0033d2b6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033d2b6(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0033bc7e(2,0,0,0,1);
    iVar1 = FUN_0033c58a();
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  else {
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}
