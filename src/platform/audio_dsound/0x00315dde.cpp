/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3627D24249CBC209C147C5DE4DA67E4A946C5835F1C59418439F90B2BD7A4461
 * Entry: 0x00315dde, Ghidra index: 12120, label: FUN_00315dde
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00315dde(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0x6f0);
  uVar2 = *puVar1;
  do {
    uVar3 = uVar2;
    uVar2 = *puVar1;
  } while (uVar3 != *puVar1);
  *puVar1 = 0;
  *(uint *)(param_1 + 0x6f8) = *(uint *)(param_1 + 0x6f8) | uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}
