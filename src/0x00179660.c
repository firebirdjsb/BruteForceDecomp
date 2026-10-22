/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 037D9E1C4260284F0FBDEDD4DB12B163A9BFC610E6F83CC369D69A81F7D5ED10
 * Entry: 0x00179660, Ghidra index: 4988, label: FUN_00179660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00179660(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  float10 fVar6;
  int local_4;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
  local_4 = 0;
  puVar5 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar2;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
  if (puVar5 == puVar2) {
    return 0;
  }
  do {
    bVar1 = *(byte *)((int)puVar5 + 0x85);
    if (((((bVar1 & 1) != 0) && (*(char *)(puVar5 + 7) != '\0')) && ((bVar1 & 4) == 0)) &&
       (local_4 = local_4 + 1, (bVar1 & 2) != 0)) {
      if (((char)unaff_EBX == '\0') || (fVar6 = (float10)FUN_00179070(), (float10)0.2 <= fVar6)) {
        for (puVar3 = (undefined4 *)*puVar5; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
          if ((((*(byte *)((int)puVar3 + 0x85) & 4) == 0) &&
              (cVar4 = FUN_00179760(param_1,puVar5 + 2,puVar3 + 2,unaff_EBX), cVar4 != '\0')) &&
             (cVar4 = FUN_00179850(param_1,puVar5 + 2,puVar3 + 2,unaff_EBX), cVar4 != '\0')) {
            *(byte *)((int)puVar3 + 0x85) = *(byte *)((int)puVar3 + 0x85) | 4;
          }
        }
      }
      else {
        *(byte *)((int)puVar5 + 0x85) = *(byte *)((int)puVar5 + 0x85) | 4;
      }
    }
    puVar5 = (undefined4 *)*puVar5;
  } while (puVar5 != puVar2);
  return local_4;
}
