/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADF777E43495A8642CED8AD135040640EBB06509C1D162A6BD07CC875DB12B28
 * Entry: 0x0022f580, Ghidra index: 7737, label: FUN_0022f580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0022f580(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x228);
  uVar3 = in_EAX & 0xffffff00;
  if ((*(int *)(iVar1 + 0x154) != 0) &&
     (1 < (uint)(*(int *)(iVar1 + 0x158) - *(int *)(iVar1 + 0x154) >> 2))) {
    uVar3 = *(int *)(unaff_ESI + 0x200) + 1;
    *(uint *)(unaff_ESI + 0x200) = uVar3;
    iVar2 = *(int *)(iVar1 + 0x154);
    if ((iVar2 == 0) || ((uint)(*(int *)(iVar1 + 0x158) - iVar2 >> 2) <= uVar3)) {
      *(undefined4 *)(unaff_ESI + 0x200) = 0;
    }
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}
