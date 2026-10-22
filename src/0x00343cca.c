/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78265F04AF0F6FB24BD44C5D653CBE66D19F1B238FA88BEA28C64D2C19DD7F6F
 * Entry: 0x00343cca, Ghidra index: 12725, label: FUN_00343cca
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00343cca(int param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00343a65(param_1,param_2,0);
  if ((iVar3 != 0) && (iVar3 = FUN_00343af7(param_1,&param_2,0), iVar3 != 0)) {
    if (param_2 == 0) {
      uVar4 = 0xfffffc15;
    }
    else {
      if (param_2 == 1) {
        *param_3 = (uint)**(byte **)(param_1 + 0x24);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        return 1;
      }
      if (param_2 == 2) {
        *param_3 = (uint)CONCAT11(**(undefined1 **)(param_1 + 0x24),
                                  (*(undefined1 **)(param_1 + 0x24))[1]);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 2;
        return 1;
      }
      if (param_2 == 3) {
        puVar2 = *(undefined1 **)(param_1 + 0x24);
        *param_3 = (uint)CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 3;
        return 1;
      }
      if (param_2 == 4) {
        puVar2 = *(undefined1 **)(param_1 + 0x24);
        *param_3 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
        return 1;
      }
      if ((param_2 == 5) && (pcVar1 = *(char **)(param_1 + 0x24), *pcVar1 == '\0')) {
        *param_3 = CONCAT31(CONCAT21(CONCAT11(pcVar1[1],pcVar1[2]),pcVar1[3]),pcVar1[4]);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 5;
        return 1;
      }
      uVar4 = 0xfffffc14;
    }
    FUN_00343377(param_1,uVar4);
  }
  return 0;
}
