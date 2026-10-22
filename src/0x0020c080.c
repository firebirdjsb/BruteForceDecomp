/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5007504D02ED121C692AD3243E567D438BDD7B0436DE6286E91DCF774881BD3
 * Entry: 0x0020c080, Ghidra index: 7347, label: FUN_0020c080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020c080(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x1c))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_001dc420(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x1c;
    return;
  }
  FUN_0020c620(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
