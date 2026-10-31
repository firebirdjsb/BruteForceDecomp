/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5881B9C8059B90F31907224134FF8B30111F3035C4EE6EFD11CF400C662C7749
 * Entry: 0x002bece0, Ghidra index: 9983, label: FUN_002bece0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched prototype only; Xbox guest ABI_UNVERIFIED. */
extern void FUN_002bec40(void);
void FUN_002bece0(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (*in_ECX <= in_ECX[2] * 2) {
    FUN_002bec40();
  }
  uVar7 = in_ECX[1];
  uVar5 = uVar7 & param_3;
  puVar1 = (uint *)(in_ECX[3] + uVar5 * 0xc);
  in_ECX[2] = in_ECX[2] + 1;
  uVar2 = puVar1[1];
  uVar6 = uVar5;
  uVar3 = param_2;
  uVar4 = param_1;
  while (uVar2 != 0) {
    uVar2 = *puVar1;
    uVar7 = uVar2 & uVar7;
    param_1 = uVar4;
    param_2 = uVar3;
    if ((int)uVar6 < (int)uVar7) {
      param_2 = puVar1[2];
      param_1 = puVar1[1];
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      *puVar1 = param_3;
      uVar6 = uVar7;
      param_3 = uVar2;
    }
    uVar7 = in_ECX[1];
    uVar5 = uVar5 + 1 & uVar7;
    puVar1 = (uint *)(in_ECX[3] + uVar5 * 0xc);
    uVar3 = param_2;
    uVar4 = param_1;
    uVar2 = puVar1[1];
  }
  iVar8 = uVar5 * 0xc;
  *(uint *)(in_ECX[3] + 4 + iVar8) = uVar4;
  *(uint *)(in_ECX[3] + 8 + iVar8) = uVar3;
  *(uint *)(iVar8 + in_ECX[3]) = param_3;
  return;
}
