/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6436B3CEA9DFB44259885E826BEAC2EBD1022301547B5953B5D6E297924A159B
 * Entry: 0x00051040, Ghidra index: 730, label: FUN_00051040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00051040(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    puVar5 = param_1 + 2;
    do {
      iVar1 = *(int *)*puVar4;
      puVar3 = param_1;
      if (iVar1 < *(int *)*param_1) {
joined_r0x000510a0:
        if ((puVar3 != puVar4) && (puVar4 != puVar5)) {
          FUN_00051570(puVar3,puVar4,puVar5,0,0);
        }
      }
      else {
        puVar2 = puVar5 + -2;
        if (iVar1 < *(int *)puVar5[-2]) {
          do {
            puVar3 = puVar2;
            puVar2 = puVar3 + -1;
          } while (iVar1 < *(int *)puVar3[-1]);
          goto joined_r0x000510a0;
        }
      }
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar4 != param_2);
  }
  return;
}
