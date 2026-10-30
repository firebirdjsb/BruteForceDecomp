/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B28FDE7337E94F85D66B9A81B6A50BE8B2F0A4C22323F4492A9CDED9AB74762
 * Entry: 0x0025b13e, Ghidra index: 8536, label: FUN_0025b13e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0025b13e(void)

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
  iVar2 = FUN_002ea01d(0x3c);
  if (iVar2 != unaff_EBP) {
    unaff_EBP = FUN_0025b530();
  }
  puVar3 = (uint *)(in_stack_00000018 + 0x14);
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(in_stack_00000018 + 8);
  puVar4 = puVar3;
  puVar5 = (uint *)(unaff_EBP + 0x14);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if ((((uVar1 & 0xffff) == 0) && ((uVar1 & 0x70000) == 0x50000)) &&
       (*(int *)(in_stack_00000018 + 0x28) != 0)) {
      D3D8LTCG__D3DResource_AddRef(*(int *)(in_stack_00000018 + 0x28));
    }
    *puVar3 = *puVar3 + 1;
  }
  *in_stack_00000020 = unaff_EBP;
  return 1;
}
