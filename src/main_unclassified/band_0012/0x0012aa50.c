/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 147A02700F49C792811A893FB1D2B48420D858CF486016B4E081CF8A6E2CE1DE
 * Entry: 0x0012aa50, Ghidra index: 3767, label: FUN_0012aa50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012aa50(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  int iVar1;
  undefined4 in_EDX;
  undefined4 *puVar2;
  
  *in_EAX = in_ECX;
  in_EAX[2] = param_1;
  in_EAX[1] = in_EDX;
  puVar2 = in_EAX + 3;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(in_EAX + 8) = param_3;
  *(undefined1 *)((int)in_EAX + 0x21) = 0;
  return;
}
