/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDFB6EFCE8DBE5A8C5BC88E339CBC578DC9BE64769612D64B6527E20A77BE787
 * Entry: 0x00259510, Ghidra index: 8500, label: FUN_00259510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00259510(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  int unaff_EDI;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(unaff_EDI + 0x14);
  ppuVar3 = &local_8;
  cVar1 = *(char *)((int)local_4[1] + 0x15);
  local_8 = local_4;
  puVar4 = (undefined4 *)local_4[1];
  while (cVar1 == '\0') {
    if ((uint)puVar4[3] < unaff_ESI) {
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
  if ((local_8 == local_4) || (unaff_ESI < (uint)local_8[3])) {
    ppuVar3 = &local_4;
  }
  if (*ppuVar3 == *(undefined4 **)(unaff_EDI + 0x14)) {
    return 0;
  }
  return (*ppuVar3)[4];
}
