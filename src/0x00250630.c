/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2EEDAF2512841BE626EC753B7D5CF0EC9804AD7106712831A28EDBD05C8B9517
 * Entry: 0x00250630, Ghidra index: 8345, label: FUN_00250630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00250630(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  *in_EAX = in_ECX;
  in_EAX[1] = in_EDX;
  in_EAX[2] = param_1;
  in_EAX[3] = *param_2;
  *(undefined1 *)(in_EAX + 4) = param_3;
  *(undefined1 *)((int)in_EAX + 0x11) = 0;
  return;
}
