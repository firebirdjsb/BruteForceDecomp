/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D4E6CF096DF9BC661F0B518389C23B61757B3C46BA66FCE685C3B99FC17803B
 * Entry: 0x0017ee90, Ghidra index: 5114, label: FUN_0017ee90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0017ee90(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  uint unaff_ESI;
  int unaff_EDI;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(unaff_EDI + 0xd0);
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
  if (*ppuVar3 != *(undefined4 **)(unaff_EDI + 0xd0)) {
    return (*ppuVar3)[4];
  }
  return 0;
}
