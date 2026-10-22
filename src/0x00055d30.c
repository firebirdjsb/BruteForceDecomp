/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4613F9E26CE84602015E00682F73966B1DFD55B7FF9B2FC87741389645B2F1C3
 * Entry: 0x00055d30, Ghidra index: 823, label: FUN_00055d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00055d30(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 1U) {
    FUN_00055ec0();
  }
  uVar2 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  if (*(uint *)(in_EAX + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar2 * 4) == 0) {
    uVar1 = FUN_002ea01d(0xa0);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar2 * 4) = uVar1;
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar2 * 4) != 0) {
    FUN_00055a00(param_1);
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
