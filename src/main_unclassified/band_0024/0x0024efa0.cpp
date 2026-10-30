/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1592DF2313DEAAB30484A331CDF9C97E2DE68BEFB17633068707B84807DA746B
 * Entry: 0x0024efa0, Ghidra index: 8309, label: FUN_0024efa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0024efa0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  int unaff_EDI;
  undefined4 *local_8;
  undefined4 *local_4;
  
  ppuVar3 = &local_8;
  if (unaff_ESI < (uint)(int)*(short *)(unaff_EDI + 0x54)) {
    local_4 = *(undefined4 **)(unaff_EDI + 0x5c);
    cVar1 = *(char *)((int)local_4[1] + 0x15);
    local_8 = local_4;
    puVar4 = (undefined4 *)local_4[1];
    while (cVar1 == '\0') {
      if ((int)puVar4[3] < (int)unaff_ESI) {
        puVar2 = (undefined4 *)puVar4[2];
        puVar4 = local_8;
      }
      else {
        puVar2 = (undefined4 *)*puVar4;
      }
      local_8 = puVar4;
      puVar4 = puVar2;
      cVar1 = *(char *)((int)puVar2 + 0x15);
    }
    if ((local_8 == local_4) || ((int)unaff_ESI < (int)local_8[3])) {
      ppuVar3 = &local_4;
    }
    if (*(undefined4 **)(unaff_EDI + 0x5c) != *ppuVar3) {
      return 1;
    }
  }
  return 0;
}
