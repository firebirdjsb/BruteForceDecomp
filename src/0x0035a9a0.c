/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63255713A35E28042EBCBAD418DA0C57EFDBA8AE50035FA7E2AA145873E69993
 * Entry: 0x0035a9a0, Ghidra index: 13179, label: FUN_0035a9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035a9a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int aiStack_80 [16];
  int aiStack_40 [16];
  
  param_1[7] = param_1[7] + 1;
  do {
    puVar7 = (undefined4 *)0x0;
    for (puVar1 = (undefined4 *)param_1[6]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (*param_1 != 1) {
        return;
      }
      uVar5 = (*(code *)puVar1[4])(puVar1,param_1[7]);
      puVar1[3] = uVar5;
      if (uVar5 != 0) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar1[2] = 0;
          puVar7 = puVar1;
        }
        else if (uVar5 < (uint)puVar7[3]) {
          iVar2 = puVar7[2];
          puVar4 = puVar7;
          while (iVar2 != 0) {
            puVar3 = (undefined4 *)puVar4[2];
            if ((uint)puVar3[3] <= uVar5) {
              puVar1[2] = puVar4[2];
              goto LAB_0035aa24;
            }
            puVar4 = puVar3;
            iVar2 = puVar3[2];
          }
          puVar1[2] = 0;
LAB_0035aa24:
          puVar4[2] = puVar1;
        }
        else {
          puVar1[2] = puVar7;
          puVar7 = puVar1;
        }
      }
    }
    uVar5 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      return;
    }
    do {
      if (0xf < uVar5) break;
      aiStack_80[uVar5] = puVar7[1];
      aiStack_40[uVar5] = (int)puVar7;
      puVar7 = (undefined4 *)puVar7[2];
      uVar5 = uVar5 + 1;
    } while (puVar7 != (undefined4 *)0x0);
    if (uVar5 == 0) {
      return;
    }
    uVar6 = XAPILIB__WaitForMultipleObjects(uVar5,aiStack_80,0,0);
    if (uVar6 < uVar5) {
      (**(code **)(aiStack_40[uVar6] + 0x14))(aiStack_40[uVar6],param_1[7]);
      XAPILIB__ReleaseMutex(aiStack_80[uVar6]);
    }
  } while( true );
}
