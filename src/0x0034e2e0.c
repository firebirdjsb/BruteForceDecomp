/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F45E327C8D4530CC3F5B923C289E0970FD0BF16A9AD45241EA440F3E5D4A6891
 * Entry: 0x0034e2e0, Ghidra index: 13021, label: FUN_0034e2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034e2e0(uint *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *local_8;
  
  puVar2 = param_1;
  iVar4 = 1;
  if (0 < param_2 / 9) {
    do {
      iVar4 = iVar4 * 3 + 1;
    } while (iVar4 <= param_2 / 9);
    if (iVar4 < 1) {
      return;
    }
  }
  do {
    if (iVar4 < param_2) {
      local_8 = puVar2;
      param_1 = (uint *)iVar4;
      do {
        uVar1 = puVar2[(int)param_1];
        iVar3 = (int)param_1;
        for (puVar5 = local_8; (iVar4 <= iVar3 && (uVar1 < *puVar5)); puVar5 = puVar5 + -iVar4) {
          puVar2[iVar3] = *puVar5;
          iVar3 = iVar3 - iVar4;
        }
        param_1 = (uint *)((int)param_1 + iVar4);
        puVar2[iVar3] = uVar1;
        local_8 = local_8 + iVar4;
      } while ((int)param_1 < param_2);
    }
    iVar4 = iVar4 / 3;
  } while (0 < iVar4);
  return;
}
