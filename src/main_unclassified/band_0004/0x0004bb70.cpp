/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C29B8211E6FEA2BC0E1E741550FD9179FC828F11F5018D11458423C17F1A4092
 * Entry: 0x0004bb70, Ghidra index: 624, label: FUN_0004bb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0004ba00(int param_1,float *param_2,float *param_3,float param_4,undefined4 *param_5);

int FUN_0004bb70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 != puVar1) {
    do {
      iVar2 = puVar4[3];
      if ((iVar2 != 0) &&
         (cVar3 = FUN_0004ba00(iVar2,param_2,param_3,param_4,param_6), cVar3 != '\0')) {
        return iVar2;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(param_1 + 4));
  }
  return 0;
}
