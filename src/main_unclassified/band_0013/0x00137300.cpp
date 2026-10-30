/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37EDE534D143280FEE4AB805E3775FB179C9E3D0466C66C830107E26549C528A
 * Entry: 0x00137300, Ghidra index: 3903, label: FUN_00137300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00137300(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(unaff_EDI + 0x40);
  ppuVar3 = &local_8;
  cVar1 = *(char *)((int)local_4[1] + 0x21);
  local_8 = local_4;
  puVar4 = (undefined4 *)local_4[1];
  while (cVar1 == '\0') {
    if ((int)puVar4[3] < unaff_ESI) {
      puVar2 = (undefined4 *)puVar4[2];
      puVar4 = local_8;
    }
    else {
      puVar2 = (undefined4 *)*puVar4;
    }
    local_8 = puVar4;
    puVar4 = puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x21);
  }
  if ((local_8 == local_4) || (unaff_ESI < (int)local_8[3])) {
    ppuVar3 = &local_4;
  }
  if (*ppuVar3 != *(undefined4 **)(unaff_EDI + 0x40)) {
    return *ppuVar3 + 4;
  }
  return (undefined4 *)0x0;
}
