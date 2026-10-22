/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 630F2966089303FB293AAE1CB68A9E7C5954C0CFCFF2CA815D45DDFF6EB056CA
 * Entry: 0x00137930, Ghidra index: 3911, label: FUN_00137930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137930(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x2c) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x2c))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00139a30(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x2c;
    return;
  }
  FUN_00137d30(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
