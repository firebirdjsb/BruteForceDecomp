/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBC02830A352B3332DD5908B9D4C254780677B040E983552A074B4A7336983B4
 * Entry: 0x001263e0, Ghidra index: 3706, label: FUN_001263e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_001263e0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  uint unaff_EDI;
  bool bVar6;
  
  bVar6 = true;
  if (*(int *)(unaff_ESI + 0x7fc) != 0) {
    puVar2 = *(undefined4 **)(unaff_ESI + 0x7f8);
    cVar1 = *(char *)((int)puVar2[1] + 0x15);
    puVar3 = puVar2;
    puVar5 = (undefined4 *)puVar2[1];
    while (cVar1 == '\0') {
      if ((uint)puVar5[3] < unaff_EDI) {
        puVar4 = (undefined4 *)puVar5[2];
        puVar5 = puVar3;
      }
      else {
        puVar4 = (undefined4 *)*puVar5;
      }
      puVar3 = puVar5;
      puVar5 = puVar4;
      cVar1 = *(char *)((int)puVar4 + 0x15);
    }
    if ((puVar3 != puVar2) && ((uint)puVar3[3] <= unaff_EDI)) {
      return puVar3 == *(undefined4 **)(unaff_ESI + 0x7f8);
    }
    bVar6 = puVar2 == *(undefined4 **)(unaff_ESI + 0x7f8);
  }
  return bVar6;
}
