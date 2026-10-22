/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA6E07B4F2EDC61DF82C72066A15DEF471C946BC33F0A526AEE14964A077D472
 * Entry: 0x001813e0, Ghidra index: 5152, label: FUN_001813e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001813e0(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int iVar1;
  undefined4 in_EDX;
  undefined4 *puVar2;
  
  *in_EAX = in_EDX;
  in_EAX[1] = param_1;
  in_EAX[2] = param_2;
  in_EAX[3] = *in_ECX;
  puVar2 = in_EAX + 4;
  for (iVar1 = 0xc; in_ECX = in_ECX + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *in_ECX;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(in_EAX + 0x10) = param_3;
  *(undefined1 *)((int)in_EAX + 0x41) = 0;
  return;
}
