/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CF51C2103ED22301F6376378EDA25E530FE494BCCD455A926024EC412989073
 * Entry: 0x003357a4, Ghidra index: 12433, label: FUN_003357a4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003357a4(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x15b4);
  if ((param_1 == *piVar1) || (piVar1 = (int *)(in_ECX + 0x15b8), param_1 == *piVar1)) {
    *piVar1 = 0;
  }
  FUN_003356c8(param_1);
  thunk_FUN_0033e986(param_1,0x1f);
  return;
}
