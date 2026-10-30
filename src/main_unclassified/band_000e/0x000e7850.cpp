/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C45FCEA57570596A3FD01DB56D082AF589535120F024C52510184B8E9D5B155A
 * Entry: 0x000e7850, Ghidra index: 2873, label: FUN_000e7850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c06e3;
extern uint32_t DAT_0041b4d0;
extern uint32_t DAT_0041b510;
extern uint32_t DAT_0041b518;
extern uint32_t DAT_0041b690;
extern uint32_t DAT_0041b790;
extern uint32_t DAT_0041b810;
extern uint32_t DAT_0041b814;
extern uint32_t DAT_0041b818;
extern uint32_t DAT_0041d010;
extern uint32_t DAT_0041d020;
extern uint32_t DAT_0041d028;
extern uint32_t DAT_0041d1a0;
extern uint32_t DAT_0041d1e0;
extern uint32_t DAT_0041d2e0;
extern uint32_t DAT_00469a78;
extern uint32_t DAT_00469a7c;
extern uint32_t DAT_00469a80;
extern uint32_t DAT_00469a84;
extern uint32_t DAT_00469a88;
extern uint32_t DAT_00469a8c;
extern uint32_t DAT_00469a90;
extern uint32_t DAT_00469a94;
extern uint32_t DAT_00469a98;
extern uint32_t DAT_00469a9c;
undefined1 FUN_000e7850(int *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBX;
  int *unaff_ESI;
  int unaff_EDI;
  bool bVar6;
  float10 fVar7;
  undefined1 uStack_c;
  undefined4 uStack_8;
  
  if (((*(byte *)((int)unaff_ESI + 0x26) & 8) == 0) ||
     ((uVar3 = -(uint)((*(byte *)((int)unaff_ESI + 0x26) & 0x40) != 0) & (uint)unaff_ESI, uVar3 != 0
      && ((*(byte *)(uVar3 + 0x70) & 0x20) == 0)))) {
    return 0;
  }
  uVar5 = *(undefined4 *)(*param_1 + 0x8c);
  cVar2 = (**(code **)(*unaff_ESI + 0x88))(uVar5);
  if (cVar2 == '\0') {
    return 0;
  }
  if (((*(int *)(unaff_ESI[3] + 4) != 3) &&
      (iVar4 = (**(code **)(*unaff_ESI + 0x20))(uVar5,*(int *)(unaff_ESI[3] + 4)), iVar4 != 0)) &&
     (*(int *)(*(int *)(iVar4 + 0xc) + 4) == 3)) {
    return 0;
  }
  iVar4 = *unaff_ESI;
  fVar7 = (float10)(**(code **)(iVar4 + 0x70))(*(undefined4 *)(*param_1 + 0x8c));
  (**(code **)(iVar4 + 0x74))((float)fVar7);
  (**(code **)(*unaff_ESI + 0xd0))(0);
  bVar1 = false;
  uVar5 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x8c) + 0x48) + 0xc))();
  iVar4 = DAT_00469a8c;
  uStack_c = 0;
  if ((unaff_EBX != 0) && (*(int **)(unaff_EBX + 0x188) != (int *)0x0)) {
    cVar2 = (**(code **)(**(int **)(unaff_EBX + 0x188) + 8))();
    if (cVar2 != '\0') {
      if (DAT_00469a9c < 0x10) {
        (&DAT_0041b4d0)[DAT_00469a9c] = unaff_ESI;
        DAT_00469a9c = DAT_00469a9c + 1;
      }
      return 1;
    }
    return 0;
  }
  if (unaff_EDI == 0x11) {
    if (0x1ff < DAT_00469a8c) {
      return 1;
    }
    (&DAT_0041b818)[DAT_00469a8c * 3] = unaff_ESI;
  }
  else {
    if (unaff_EDI != 0xf) {
      if (unaff_EDI == 0x16) {
        if (unaff_ESI[0x78] == 0) {
          if (DAT_00469a78 < 0x800) {
            (&DAT_0041d2e0)[DAT_00469a78] = unaff_ESI;
            DAT_00469a78 = DAT_00469a78 + 1;
          }
          if (unaff_EBX == 0) {
            return 1;
          }
          if (DAT_003c06e3 == '\0') {
            return 1;
          }
          iVar4 = FUN_000e7630(unaff_EBX);
          param_1[3] = iVar4;
          iVar4 = FUN_000e7630(*(undefined4 *)(unaff_EBX + 0x6c));
          param_1[3] = iVar4;
          return 1;
        }
        if (unaff_ESI[0x78] != 2) {
          if (0x1f < DAT_00469a84) {
            return 1;
          }
          iVar4 = DAT_00469a84 * 0xc;
          (&DAT_0041d028)[DAT_00469a84 * 3] = unaff_ESI;
          FUN_000e7780(uVar5,&DAT_0041d020 + iVar4,iVar4 + 0x41d024);
          DAT_00469a84 = DAT_00469a84 + 1;
          return 1;
        }
        if (3 < DAT_00469a88) {
          return 1;
        }
        (&DAT_0041d010)[DAT_00469a88] = unaff_ESI;
        DAT_00469a88 = DAT_00469a88 + 1;
        return 1;
      }
      iVar4 = *(int *)(*(int *)(*param_1 + 0x8c) + 0xd8);
      if (unaff_EDI == 3) {
        if (iVar4 == 2) {
          bVar6 = (*(byte *)(unaff_ESI + 0x1c) & 1) == 0;
        }
        else {
          bVar6 = iVar4 == 1;
        }
        if (bVar6) {
          if ((1.0 <= (float)unaff_ESI[0x1ce] * (float)unaff_ESI[0x1cb]) &&
             (fVar7 = (float10)FUN_00116340(unaff_ESI,*param_1), (float10)1.0 <= fVar7)) {
            if (0x3f < DAT_00469a94) {
              return 1;
            }
            (&DAT_0041b690)[DAT_00469a94] = unaff_ESI;
            DAT_00469a94 = DAT_00469a94 + 1;
            return 1;
          }
          if (0x1f < DAT_00469a98) {
            return 1;
          }
          iVar4 = DAT_00469a98 * 0xc;
          (&DAT_0041b518)[DAT_00469a98 * 3] = unaff_ESI;
          FUN_000e7780(uVar5,&DAT_0041b510 + iVar4,iVar4 + 0x41b514);
          DAT_00469a98 = DAT_00469a98 + 1;
          return 1;
        }
      }
      cVar2 = FUN_000e51e0(*(undefined4 *)(param_1[4] + 0xb78));
      if (cVar2 != '\0') {
        if (DAT_00469a90 < 0x20) {
          *(int **)(&DAT_0041b790 + DAT_00469a90 * 4) = unaff_ESI;
          DAT_00469a90 = DAT_00469a90 + 1;
        }
        uStack_c = 1;
        bVar1 = true;
        if ((unaff_ESI[0x153] != 0) && (fVar7 = (float10)FUN_00210a20(), fVar7 == (float10)0.0)) {
          return 1;
        }
      }
      if (unaff_EDI != 3) {
        if (!bVar1) {
          if (DAT_00469a78 < 0x800) {
            (&DAT_0041d2e0)[DAT_00469a78] = unaff_ESI;
            DAT_00469a78 = DAT_00469a78 + 1;
          }
          uStack_c = 1;
          if ((unaff_EBX != 0) && (DAT_003c06e3 != '\0')) {
            iVar4 = FUN_000e7630(unaff_EBX);
            param_1[3] = iVar4;
            iVar4 = FUN_000e7630(*(undefined4 *)(unaff_EBX + 0x6c));
            param_1[3] = iVar4;
          }
        }
        return uStack_c;
      }
      if ((unaff_ESI[0x153] != 0) &&
         ((((uVar3 = FUN_00210910(), (uVar3 & 0xc2) != 0 ||
            (fVar7 = (float10)FUN_00210a20(), fVar7 < (float10)1.0)) ||
           (fVar7 = (float10)FUN_00116340(unaff_ESI,uStack_8), fVar7 < (float10)1.0)) ||
          ((*(int *)(*param_1 + 0x8c) == unaff_ESI[0x179] &&
           ((float)unaff_ESI[0x1ce] * (float)unaff_ESI[0x1cb] < 1.0)))))) {
        if (DAT_00469a8c < 0x200) {
          iVar4 = DAT_00469a8c * 0xc;
          (&DAT_0041b818)[DAT_00469a8c * 3] = unaff_ESI;
          FUN_000e7780(uVar5,&DAT_0041b810 + iVar4,&DAT_0041b814 + iVar4);
          DAT_00469a8c = DAT_00469a8c + 1;
          *(undefined4 *)(&DAT_0041b814 + iVar4) = 0;
        }
        if (0xf < DAT_00469a80) {
          return 1;
        }
        (&DAT_0041d1a0)[DAT_00469a80] = unaff_ESI;
        DAT_00469a80 = DAT_00469a80 + 1;
        return 1;
      }
      if (0x3f < DAT_00469a7c) {
        return 1;
      }
      (&DAT_0041d1e0)[DAT_00469a7c] = unaff_ESI;
      DAT_00469a7c = DAT_00469a7c + 1;
      return 1;
    }
    if (0x1ff < DAT_00469a8c) {
      return 1;
    }
    (&DAT_0041b818)[DAT_00469a8c * 3] = unaff_ESI;
  }
  FUN_000e7780(uVar5,&DAT_0041b810 + iVar4 * 0xc,&DAT_0041b814 + iVar4 * 0xc);
  DAT_00469a8c = DAT_00469a8c + 1;
  return 1;
}
