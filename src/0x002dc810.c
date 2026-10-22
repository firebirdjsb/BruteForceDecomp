/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5113D8A5B128262893E601AF6D76CB6809C534A448FD15FA374AFF3C1A883A0
 * Entry: 0x002dc810, Ghidra index: 10303, label: FUN_002dc810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002dc810(int param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  iVar4 = 0;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (iVar4 < *(short *)(param_2 + 0x4c)) {
LAB_002dc8cf:
      fVar1 = 0.0;
    }
    else {
      fVar1 = *(float *)(*(int *)(param_1 + 0x14) + iVar4 * 4);
      if (fVar1 <= 0.0) {
        if (fVar1 != 0.0) {
          if ((int)puVar2[0x19] < 0) {
            puVar2[0x19] = 0;
          }
          iVar3 = puVar2[0x19];
          puVar2[0x19] = iVar3 + 1;
          if (9 < iVar3 + 1) {
            puVar2[0x19] = 0;
          }
          goto LAB_002dc8aa;
        }
        puVar2[0x19] = 0;
        fVar1 = (float)puVar2[0x15] * **(float **)(param_1 + 0x20) * 0.0;
      }
      else {
        if ((int)puVar2[0x19] < 0) {
          puVar2[0x19] = puVar2[0x19] + -1;
        }
        else {
          puVar2[0x19] = 0xffffffff;
        }
LAB_002dc8aa:
        FUN_002dc0b0(fVar1);
      }
      if (fVar1 < 0.0) goto LAB_002dc8cf;
    }
    iVar4 = iVar4 + 1;
    puVar2[0x15] = fVar1 * *(float *)(*(int *)(param_1 + 0x20) + 4);
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}
