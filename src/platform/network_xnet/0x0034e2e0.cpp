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
  // This stack word is an integer index after the incoming pointer is saved.
  // For 2 <= count <= INT_MAX/2, use one live uint array with count prefix
  // elements and count elements from param_1; count <= 1 is no-access.
  // The unchanged backwards cursor may enter the prefix but never reads it.
  // Guest32 address wrap, memory mapping and full ABI remain unverified.
  int local_index;
  
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
      local_index = iVar4;
      do {
        uVar1 = puVar2[local_index];
        iVar3 = local_index;
        for (puVar5 = local_8; (iVar4 <= iVar3 && (uVar1 < *puVar5)); puVar5 = puVar5 + -iVar4) {
          puVar2[iVar3] = *puVar5;
          iVar3 = iVar3 - iVar4;
        }
        local_index = local_index + iVar4;
        puVar2[iVar3] = uVar1;
        local_8 = local_8 + iVar4;
      } while (local_index < param_2);
    }
    iVar4 = iVar4 / 3;
  } while (0 < iVar4);
  return;
}
