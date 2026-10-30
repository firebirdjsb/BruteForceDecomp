/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D863871B1AE740CF3321F2DF60D84A5F193DEE872C09690629CD4A3CB4A91CF
 * Entry: 0x0004d6f0, Ghidra index: 652, label: FUN_0004d6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004d6f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(unaff_EBX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 != puVar1) {
    do {
      iVar2 = puVar4[3];
      if (((iVar2 != 0) && ((*(byte *)(iVar2 + 0x28) & 4) != 0)) && (param_1 != (undefined4 *)0x0))
      {
        cVar3 = (**(code **)*param_1)(iVar2);
        if (cVar3 != '\0') {
          return iVar2;
        }
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(unaff_EBX + 4));
  }
  return 0;
}
