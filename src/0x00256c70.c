/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B11D92925818DB7A36480A4A47812A1F1557AEBEEC8B2E9A1326E87E83B31D86
 * Entry: 0x00256c70, Ghidra index: 8446, label: FUN_00256c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00256c70(undefined4 *param_1)

{
  int iVar1;
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + 4) + 8) = *(undefined4 *)(in_EAX + 8);
  }
  if (*(int *)(in_EAX + 8) != 0) {
    *(undefined4 *)(*(int *)(in_EAX + 8) + 4) = *(undefined4 *)(in_EAX + 4);
  }
  iVar1 = *(int *)(in_EAX + 0xc);
  if (iVar1 == 0) {
    *param_1 = *(undefined4 *)(in_EAX + 8);
  }
  else if (*(int *)(iVar1 + 0x10) == in_EAX) {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(in_EAX + 8);
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 4) = 0;
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 4) = 0;
  return;
}
