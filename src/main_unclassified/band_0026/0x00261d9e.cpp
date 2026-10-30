/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9A9DA0CB3D2C7E1C444E0117E6EDB623238BB5EC909092B77255D3910E6C2A3
 * Entry: 0x00261d9e, Ghidra index: 8647, label: FUN_00261d9e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00261d9e(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  int in_stack_00000018;
  int *in_stack_00000020;
  
  uStack00000008 = 0xf6ffda13;
  uStack00000004 = 0x10;
  iVar2 = FUN_002ea01d(0x2c);
  if (iVar2 != unaff_EBP) {
    unaff_EBP = FUN_00261fb0();
  }
  puVar3 = (uint *)(in_stack_00000018 + 8);
  *(undefined4 *)(unaff_EBP + 4) = *(undefined4 *)(in_stack_00000018 + 4);
  puVar4 = puVar3;
  puVar5 = (uint *)(unaff_EBP + 8);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((((uVar1 & 0xffff) == 0) && ((uVar1 & 0x70000) == 0x50000)) &&
       (*(int *)(in_stack_00000018 + 0x1c) != 0)) {
      D3D8LTCG__D3DResource_AddRef(*(int *)(in_stack_00000018 + 0x1c));
    }
    *puVar3 = *puVar3 + 1;
  }
  *in_stack_00000020 = unaff_EBP;
  return 1;
}
