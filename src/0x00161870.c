/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43A2FF175D505E2924C63E709676A8B6B09C686599673A8D8FFC7C5D30932302
 * Entry: 0x00161870, Ghidra index: 4616, label: FUN_00161870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161870(undefined4 param_1,undefined4 param_2,undefined1 param_3)

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
