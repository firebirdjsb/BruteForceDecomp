/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 674DD9C2DFBA7A1472622272DE2600D1CB8D762299411CAF81652ED83B49D71D
 * Entry: 0x0034f1af, Ghidra index: 13032, label: FUN_0034f1af
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034f1af(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      ObfDereferenceObject();
    }
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 != 0) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4c) + 0x94);
      do {
        pbVar2 = (byte *)*puVar4;
        if (pbVar2 != (byte *)0x0) {
          pbVar1 = pbVar2 + 0x128;
          *(int *)pbVar1 = *(int *)pbVar1 + -1;
          if ((*(int *)pbVar1 == 0) && ((*pbVar2 & 0x10) == 0)) {
            FUN_00349730(pbVar2,3);
          }
        }
        puVar4 = puVar4 + 0x2b;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0034eea9(*(undefined4 *)(param_1 + 0x3c));
    FUN_0034eea9(*(undefined4 *)(param_1 + 0x40));
    FUN_0034eea9(*(undefined4 *)(param_1 + 0x44));
    FUN_0034c35a(param_1 + 0x24,0xffffffff);
    ExFreePool(param_1);
  }
  return;
}
