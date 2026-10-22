/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CFE0E38994AE1BB497639E6E299635270736130C73D9B1AF20FB713CE80422D
 * Entry: 0x00129750, Ghidra index: 3748, label: FUN_00129750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00129750(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0xc) < (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0xc))
     ) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_0012b000(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0xc;
    return;
  }
  FUN_00129ad0(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
