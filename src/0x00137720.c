/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BB453F155829D7A50E9026DB39396A5839A208A1C102CD1DCE0F2ED2F8C6D9E
 * Entry: 0x00137720, Ghidra index: 3909, label: FUN_00137720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137720(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00263510(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x14;
    return;
  }
  FUN_00137c00(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
