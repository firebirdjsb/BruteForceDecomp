/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2472452834FF917012C774314AB720FFA006218313B010F4C8883D8794DB444
 * Entry: 0x000e08c0, Ghidra index: 2751, label: FUN_000e08c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e08c0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x18) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x18))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_000598b0(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x18;
    return;
  }
  FUN_000e10e0(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
