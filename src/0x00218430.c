/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC54C4E56593C1F2C10CBDAA991A4567F1E6EB5CB2FDC67F6466965FF45BD1B8
 * Entry: 0x00218430, Ghidra index: 7471, label: FUN_00218430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218430(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00218ec0(iVar1,1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x14;
    return;
  }
  FUN_002185b0(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
