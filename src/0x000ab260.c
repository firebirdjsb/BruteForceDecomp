/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A6C4A69AE9FAC8FB1281C16660242E2B55882C66B859DF51E8CDC7E51943052
 * Entry: 0x000ab260, Ghidra index: 2041, label: FUN_000ab260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000ab260(void)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  undefined4 *puVar6;
  int iVar7;
  float *unaff_EDI;
  float local_18;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  iVar7 = 0;
  local_18 = 3.4028235e+38;
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)*puVar1;
  }
  for (; puVar6 != puVar1; puVar6 = (undefined4 *)*puVar6) {
    iVar2 = puVar6[3];
    if (((*(byte *)(iVar2 + 0x28) & 4) != 0) &&
       (fVar3 = *(float *)(iVar2 + 0x1c) - unaff_EDI[2],
       fVar4 = *(float *)(iVar2 + 0x18) - unaff_EDI[1],
       fVar5 = *(float *)(iVar2 + 0x14) - *unaff_EDI,
       fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3, fVar3 < local_18)) {
      iVar7 = iVar2;
      local_18 = fVar3;
    }
  }
  return iVar7;
}
