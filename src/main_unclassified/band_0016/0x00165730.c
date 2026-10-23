/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A9C1BFF365F9C67E01BF7C43E846A9EB68B857C159EFBBE10C87FE0C7ADE322
 * Entry: 0x00165730, Ghidra index: 4700, label: FUN_00165730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00165730(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_EAX;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int local_1c;
  
  iVar7 = ((int)param_2 - (int)param_1) / 0x14;
  iVar6 = (in_EAX - (int)param_1) / 0x14;
  iVar9 = iVar6;
  local_1c = iVar7;
  while (iVar8 = iVar9, iVar8 != 0) {
    iVar9 = local_1c % iVar8;
    local_1c = iVar8;
  }
  if ((local_1c < iVar7) && (0 < local_1c)) {
    puVar12 = param_1 + local_1c * 5;
    do {
      uVar1 = *puVar12;
      puVar11 = puVar12 + iVar6 * 5;
      puVar10 = puVar11 + iVar6 * -5 + 1;
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      puVar10 = puVar12;
      if (puVar11 == param_2) {
        puVar11 = param_1;
      }
      while (puVar11 != puVar12) {
        *puVar10 = *puVar11;
        puVar10[1] = puVar11[1];
        puVar10[2] = puVar11[2];
        puVar10[3] = puVar11[3];
        puVar10[4] = puVar11[4];
        iVar7 = ((int)param_2 - (int)puVar11) / 0x14;
        puVar10 = puVar11;
        if (iVar6 < iVar7) {
          puVar11 = puVar11 + iVar6 * 5;
        }
        else {
          puVar11 = param_1 + (iVar6 - iVar7) * 5;
        }
      }
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      puVar12 = puVar12 + -5;
      local_1c = local_1c + -1;
      puVar10[4] = uVar5;
    } while (local_1c != 0);
  }
  return;
}
