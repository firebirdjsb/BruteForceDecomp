/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69FEBBAB56C922C74C70C394C886551BC266DB94592E917CBDBB9385862DF36C
 * Entry: 0x00076160, Ghidra index: 1363, label: FUN_00076160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00076160(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  in_EAX[3] = *in_ECX;
  in_EAX[4] = in_ECX[1];
  in_EAX[5] = in_ECX[2];
  *(undefined1 *)(in_EAX + 6) = param_3;
  *(undefined1 *)((int)in_EAX + 0x19) = 0;
  return;
}
