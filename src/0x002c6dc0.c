/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41C945F7C13F317ABC531E5AC25A546BD206EE5B19D2DA2ED3759ADAAF21892C
 * Entry: 0x002c6dc0, Ghidra index: 10087, label: FUN_002c6dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c6dc0(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  uint uVar1;
  int unaff_EDI;
  undefined4 local_18;
  float local_14;
  float local_10;
  
  local_14 = *(float *)(in_EAX + 0xb4);
  if (local_14 <= 1e-10) {
    local_10 = 1e+10;
  }
  else {
    local_10 = 1.0 / local_14;
  }
  uVar1 = (uint)*(ushort *)(unaff_EDI + 2);
  while (uVar1 = uVar1 - 1, 1 < (int)uVar1) {
    local_18 = *(undefined4 *)(*(int *)(unaff_EDI + 4) + uVar1 * 4);
    FUN_002c6620(&local_18,&local_14,unaff_EBX);
  }
  if (uVar1 == 1) {
    local_18 = *(undefined4 *)(*(int *)(unaff_EDI + 4) + 4);
    FUN_002c6620(&local_18,&local_14,unaff_EBX);
  }
  else if (uVar1 != 0) {
    return;
  }
  local_18 = **(undefined4 **)(unaff_EDI + 4);
  FUN_002c6620(&local_18,&local_14,unaff_EBX);
  return;
}
