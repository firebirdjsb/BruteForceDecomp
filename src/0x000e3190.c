/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A5F15F8CB69B248775BD039A8D5A66F8CB6F8E34E471A5694EFC1CB36576F0F
 * Entry: 0x000e3190, Ghidra index: 2809, label: FUN_000e3190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e3190(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    puVar3 = param_1 + 2;
    do {
      cVar2 = (*param_3)(*puVar4,*param_1);
      if (cVar2 == '\0') {
        cVar2 = (*param_3)(*puVar4,puVar3[-2]);
        puVar1 = puVar3 + -2;
        if (cVar2 != '\0') {
          do {
            puVar5 = puVar1;
            cVar2 = (*param_3)(*puVar4,puVar5[-1]);
            puVar1 = puVar5 + -1;
          } while (cVar2 != '\0');
          if ((puVar5 != puVar4) && (puVar4 != puVar3)) {
            FUN_00051570(puVar5,puVar4,puVar3,0,0);
          }
        }
      }
      else if ((param_1 != puVar4) && (puVar4 != puVar3)) {
        FUN_00051570(param_1,puVar4,puVar3,0,0);
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (puVar4 != param_2);
  }
  return;
}
