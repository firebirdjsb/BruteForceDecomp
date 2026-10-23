/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E59C3606924AD1AE24BAE3CF818C2D3125737D75B9606F78349F176BFD9D483C
 * Entry: 0x00052e40, Ghidra index: 758, label: FUN_00052e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00052e40(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x14) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x14))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00053c30(iVar1,1,param_1,param_1);
    *(int *)(in_EAX + 8) = iVar1 + 0x14;
    return;
  }
  FUN_00052fe0(&param_1,*(undefined4 *)(in_EAX + 8),param_1);
  return;
}
