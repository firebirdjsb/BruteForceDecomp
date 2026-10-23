/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C79952B8C776FAD0A6769FB90C9D62EDBEDCF296746421FD0CD3BF925C92E3F
 * Entry: 0x00170e50, Ghidra index: 4840, label: FUN_00170e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00170e50(void)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  uint in_EDX;
  int iVar4;
  undefined4 uVar5;
  undefined4 *unaff_EDI;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x60);
  if ((uint)puVar2[4] < in_EDX) {
    if ((uint)puVar2[0xe] < in_EDX) {
      local_1c = puVar2[0xd];
      local_18 = puVar2[0xc];
      uVar3 = puVar2[0xb];
      uVar5 = puVar2[10];
    }
    else {
      iVar4 = in_EDX - puVar2[4];
      fVar1 = (float)iVar4;
      if (iVar4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      puVar2 = (undefined4 *)FUN_0016fb60(fVar1 * *(float *)(in_ECX + 0x30));
      local_1c = puVar2[3];
      local_18 = puVar2[2];
      uVar3 = puVar2[1];
      uVar5 = *puVar2;
    }
    *unaff_EDI = uVar5;
  }
  else {
    local_18 = puVar2[2];
    local_1c = puVar2[3];
    uVar3 = puVar2[1];
    *unaff_EDI = *puVar2;
  }
  unaff_EDI[1] = uVar3;
  unaff_EDI[2] = local_18;
  unaff_EDI[3] = local_1c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}
