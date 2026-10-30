/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58C64923A6AA22A8E315616752FF0562D39F7EAB3B40881FD806F414D3E88754
 * Entry: 0x0011be80, Ghidra index: 3615, label: FUN_0011be80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cbfc;
extern uint32_t DAT_0040cc00;
extern uint32_t _DAT_0040cbf8;
extern uint32_t _DAT_0040cc04;
extern uint32_t _DAT_0040cc08;
extern uint32_t _DAT_0040cc0c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011be80(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  int *unaff_retaddr;
  float fVar4;
  undefined1 *puVar5;
  undefined1 auStack_30 [20];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [16];
  int *piStack_8;
  float fStack_4;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
LAB_0011c09a:
    param_1[0x1cb] = 0x3f800000;
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1[2] + 0xbec) + 0xc))(param_1);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x24) == 0)) ||
     ((*(byte *)(*(int *)(iVar1 + 0x24) + 0x14) & 2) == 0)) {
    param_1 = unaff_retaddr;
    if ((*(byte *)(unaff_retaddr + 0x1c) & 1) != 0) goto LAB_0011c09a;
  }
  else {
    puVar5 = auStack_30;
    (**(code **)(*unaff_retaddr + 0xac))(auStack_1c,puVar5);
    (**(code **)(*piStack_8 + 0x40))();
    FUN_00039510();
    if (piStack_8[0x179] == 0) {
      fVar2 = (float10)0.0;
    }
    else {
      fVar2 = (float10)FUN_0006d240(piStack_8[0x179],auStack_18,puVar5);
    }
    if ((float10)_DAT_0040cc0c <= fVar2) {
      fVar4 = DAT_0040cc00;
      if (fVar2 <= (float10)_DAT_0040cc08) {
        fVar2 = (float10)1.0 -
                (fVar2 - (float10)_DAT_0040cc0c) / ((float10)_DAT_0040cc08 - (float10)_DAT_0040cc0c)
        ;
        fVar4 = (float)(((float10)DAT_0040cc00 - (float10)_DAT_0040cc04) *
                        ((float10)1.0 - fVar2 * fVar2) + (float10)_DAT_0040cc04);
      }
    }
    else {
      fVar4 = 1.0;
    }
    if (fVar4 < (float)piStack_8[0x1cb]) {
      piStack_8[0x1cb] = (int)fVar4;
    }
    if (((float)piStack_8[0x1cc] == DAT_0040cbfc) && ((float)piStack_8[0x1cb] < fVar4)) {
      piStack_8[0x1cc] = 0;
    }
    fVar3 = fStack_4 + (float)piStack_8[0x1cc];
    if (fStack_4 + (float)piStack_8[0x1cc] <= 0.0) {
      fVar3 = 0.0;
    }
    if (DAT_0040cbfc <= fVar3) {
      fVar3 = DAT_0040cbfc;
    }
    piStack_8[0x1cc] = (int)fVar3;
    if (DAT_0040cbfc <= (float)piStack_8[0x1cc]) {
      piStack_8[0x1cb] = (int)fVar4;
      return;
    }
    if (DAT_0040cbfc - _DAT_0040cbf8 < (float)piStack_8[0x1cc]) {
      piStack_8[0x1cb] =
           (int)((fVar4 - (float)piStack_8[0x1cb]) *
                 (1.0 / _DAT_0040cbf8) * ((float)piStack_8[0x1cc] - (DAT_0040cbfc - _DAT_0040cbf8))
                + (float)piStack_8[0x1cb]);
    }
  }
  return;
}
