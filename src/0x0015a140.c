/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F0354F8EEEBAB0882382CD4AEBB17735292BEFF03319E7273AE0B3674358E56
 * Entry: 0x0015a140, Ghidra index: 4510, label: FUN_0015a140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0015a140(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_EAX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EDI;
  int local_18;
  undefined4 local_14;
  undefined4 local_10 [4];
  
  uVar5 = FUN_0015a0d0(&local_18,local_10);
  if ((char)uVar5 != '\0') {
    local_14 = *(undefined4 *)(local_18 + 0x10);
    iVar1 = *(int *)(local_18 + 0xc);
    uVar2 = *(undefined4 *)(local_18 + 8);
    unaff_EDI[1] = iVar1;
    unaff_EDI[2] = local_14;
    *unaff_EDI = uVar2;
    local_18 = iVar1;
    (**(code **)(*in_EAX + 0x34))(local_10[0]);
    puVar6 = (undefined4 *)FUN_00039510();
    uVar2 = puVar6[2];
    uVar3 = puVar6[1];
    uVar4 = *puVar6;
    *unaff_EDI = uVar4;
    unaff_EDI[1] = uVar3;
    unaff_EDI[2] = uVar2;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar5 & 0xffffff00;
}
