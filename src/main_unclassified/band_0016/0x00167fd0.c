/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E7BE06111A0F035B2F6E5A7FBD7CCBDF2834B8041FA2DCCE2273713152F1245
 * Entry: 0x00167fd0, Ghidra index: 4737, label: FUN_00167fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_00167fd0(byte *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  byte *unaff_ESI;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_1ac;
  undefined1 local_1a5;
  int local_1a4;
  int *local_19c;
  int *local_198;
  int *local_194;
  undefined1 *local_190;
  int local_18c;
  float local_188;
  int local_180 [32];
  undefined1 local_100 [128];
  int local_80 [32];
  
  local_198 = local_180;
  local_190 = local_100;
  local_19c = local_80;
  if (0x20 < param_2) {
    iVar7 = param_2 * 4;
    local_198 = (int *)thunk_FUN_002ea01d(iVar7);
    local_190 = (undefined1 *)thunk_FUN_002ea01d(iVar7);
    local_19c = (int *)thunk_FUN_002ea01d(iVar7);
  }
  iVar5 = 0;
  local_1a5 = 1;
  local_1a4 = 0;
  iVar7 = param_2;
  piVar6 = local_19c;
  if (0 < param_2) {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
  }
  local_18c = 0;
  if (0 < param_2) {
    local_194 = local_198;
    do {
      local_188 = 0.0;
      local_1ac = 0;
      do {
        if (local_19c[local_1ac] != 1) {
          iVar7 = 0;
          do {
            if ((local_19c[iVar7] == 0) &&
               (fVar4 = ABS(*(float *)(*(int *)(unaff_ESI + 4) +
                                      ((local_1ac << (*unaff_ESI & 0x1f)) + iVar7) * 4)),
               local_188 <= fVar4)) {
              local_1a4 = local_1ac;
              iVar5 = iVar7;
              local_188 = fVar4;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_2);
        }
        local_1ac = local_1ac + 1;
      } while (local_1ac < param_2);
      local_19c[iVar5] = local_19c[iVar5] + 1;
      if (local_1a4 != iVar5) {
        iVar7 = 0;
        iVar8 = iVar7;
        if (3 < param_2) {
          do {
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + iVar7 * 4);
            *(undefined4 *)(*(int *)(unaff_ESI + 4) + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(unaff_ESI + 4) +
                  ((iVar5 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8) * 4);
            *(undefined4 *)(*(int *)(unaff_ESI + 4) + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar8) * 4)
                 = uVar3;
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + 4 + iVar7 * 4);
            *(undefined4 *)(*(int *)(unaff_ESI + 4) + 4 + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(unaff_ESI + 4) + 4 +
                  ((iVar5 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8) * 4);
            *(undefined4 *)
             (*(int *)(unaff_ESI + 4) + 4 + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar8) * 4) = uVar3;
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + 8 + iVar7 * 4);
            *(undefined4 *)(*(int *)(unaff_ESI + 4) + 8 + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(unaff_ESI + 4) + 8 +
                  ((iVar5 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8) * 4);
            *(undefined4 *)
             (*(int *)(unaff_ESI + 4) + 8 + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar8) * 4) = uVar3;
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0xc + iVar7 * 4);
            *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0xc + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(unaff_ESI + 4) + 0xc +
                  ((iVar5 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8) * 4);
            iVar7 = iVar8 + 4;
            *(undefined4 *)
             (*(int *)(unaff_ESI + 4) + 0xc + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar8) * 4) = uVar3;
            iVar9 = iVar8 + 7;
            iVar8 = iVar7;
          } while (iVar9 < param_2);
        }
        for (; iVar7 < param_2; iVar7 = iVar7 + 1) {
          iVar8 = (local_1a4 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar7;
          uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 4) + iVar8 * 4);
          *(undefined4 *)(*(int *)(unaff_ESI + 4) + iVar8 * 4) =
               *(undefined4 *)
                (*(int *)(unaff_ESI + 4) +
                ((iVar5 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar7) * 4);
          *(undefined4 *)(*(int *)(unaff_ESI + 4) + ((iVar5 << (*unaff_ESI & 0x1f)) + iVar7) * 4) =
               uVar3;
        }
        iVar7 = 0;
        iVar8 = iVar7;
        if (3 < param_2) {
          do {
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(param_1 + 4) +
                  ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8) * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + ((iVar5 << (*param_1 & 0x1f)) + iVar8) * 4) =
                 uVar3;
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar7 * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(param_1 + 4) + 4 +
                  ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8) * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + 4 + ((iVar5 << (*param_1 & 0x1f)) + iVar8) * 4)
                 = uVar3;
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar7 * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(param_1 + 4) + 8 +
                  ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8) * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + 8 + ((iVar5 << (*param_1 & 0x1f)) + iVar8) * 4)
                 = uVar3;
            iVar7 = (local_1a4 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8;
            uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar7 * 4);
            *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar7 * 4) =
                 *(undefined4 *)
                  (*(int *)(param_1 + 4) + 0xc +
                  ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8) * 4);
            iVar7 = iVar8 + 4;
            *(undefined4 *)
             (*(int *)(param_1 + 4) + 0xc + ((iVar5 << (*param_1 & 0x1f)) + iVar8) * 4) = uVar3;
            iVar9 = iVar8 + 7;
            iVar8 = iVar7;
          } while (iVar9 < param_2);
        }
        for (; iVar7 < param_2; iVar7 = iVar7 + 1) {
          iVar8 = (local_1a4 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar7;
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar8 * 4);
          *(undefined4 *)(*(int *)(param_1 + 4) + iVar8 * 4) =
               *(undefined4 *)
                (*(int *)(param_1 + 4) +
                ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar7) * 4);
          *(undefined4 *)(*(int *)(param_1 + 4) + ((iVar5 << (*param_1 & 0x1f)) + iVar7) * 4) =
               uVar3;
        }
      }
      *(int *)(((int)local_190 - (int)local_198) + (int)local_194) = local_1a4;
      *local_194 = iVar5;
      iVar7 = (iVar5 << (*unaff_ESI & 0x1f)) + iVar5;
      pfVar2 = (float *)(*(int *)(unaff_ESI + 4) + iVar7 * 4);
      if (*(float *)(*(int *)(unaff_ESI + 4) + iVar7 * 4) == 0.0) {
        local_1a5 = 0;
        break;
      }
      iVar7 = 0;
      fVar4 = 1.0 / *pfVar2;
      *pfVar2 = 1.0;
      iVar8 = iVar7;
      if (3 < param_2) {
        do {
          iVar7 = (iVar5 << (*unaff_ESI & 0x1f)) + iVar8;
          *(float *)(*(int *)(unaff_ESI + 4) + iVar7 * 4) =
               fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + iVar7 * 4);
          iVar7 = (iVar5 << (*unaff_ESI & 0x1f)) + iVar8;
          *(float *)(*(int *)(unaff_ESI + 4) + 4 + iVar7 * 4) =
               fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + 4 + iVar7 * 4);
          iVar7 = (iVar5 << (*unaff_ESI & 0x1f)) + iVar8;
          *(float *)(*(int *)(unaff_ESI + 4) + 8 + iVar7 * 4) =
               fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + 8 + iVar7 * 4);
          iVar9 = (iVar5 << (*unaff_ESI & 0x1f)) + iVar8;
          iVar7 = iVar8 + 4;
          *(float *)(*(int *)(unaff_ESI + 4) + 0xc + iVar9 * 4) =
               fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + 0xc + iVar9 * 4);
          iVar9 = iVar8 + 7;
          iVar8 = iVar7;
        } while (iVar9 < param_2);
      }
      for (; iVar7 < param_2; iVar7 = iVar7 + 1) {
        iVar8 = (iVar5 << (*unaff_ESI & 0x1f)) + iVar7;
        *(float *)(*(int *)(unaff_ESI + 4) + iVar8 * 4) =
             fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + iVar8 * 4);
      }
      iVar7 = 0;
      iVar8 = iVar7;
      if (3 < param_2) {
        do {
          iVar7 = (iVar5 << (*param_1 & 0x1f)) + iVar8;
          *(float *)(*(int *)(param_1 + 4) + iVar7 * 4) =
               fVar4 * *(float *)(*(int *)(param_1 + 4) + iVar7 * 4);
          iVar7 = (iVar5 << (*param_1 & 0x1f)) + iVar8;
          *(float *)(*(int *)(param_1 + 4) + 4 + iVar7 * 4) =
               fVar4 * *(float *)(*(int *)(param_1 + 4) + 4 + iVar7 * 4);
          iVar7 = (iVar5 << (*param_1 & 0x1f)) + iVar8;
          *(float *)(*(int *)(param_1 + 4) + 8 + iVar7 * 4) =
               fVar4 * *(float *)(*(int *)(param_1 + 4) + 8 + iVar7 * 4);
          iVar9 = (iVar5 << (*param_1 & 0x1f)) + iVar8;
          iVar7 = iVar8 + 4;
          *(float *)(*(int *)(param_1 + 4) + 0xc + iVar9 * 4) =
               fVar4 * *(float *)(*(int *)(param_1 + 4) + 0xc + iVar9 * 4);
          iVar9 = iVar8 + 7;
          iVar8 = iVar7;
        } while (iVar9 < param_2);
      }
      for (; iVar7 < param_2; iVar7 = iVar7 + 1) {
        iVar8 = (iVar5 << (*param_1 & 0x1f)) + iVar7;
        *(float *)(*(int *)(param_1 + 4) + iVar8 * 4) =
             fVar4 * *(float *)(*(int *)(param_1 + 4) + iVar8 * 4);
      }
      iVar7 = 0;
      do {
        if (iVar7 != iVar5) {
          pfVar2 = (float *)(*(int *)(unaff_ESI + 4) + ((iVar7 << (*unaff_ESI & 0x1f)) + iVar5) * 4)
          ;
          fVar4 = *pfVar2;
          *pfVar2 = 0.0;
          iVar8 = 0;
          iVar9 = iVar8;
          if (3 < param_2) {
            do {
              pfVar2 = (float *)(*(int *)(unaff_ESI + 4) +
                                ((iVar7 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar9) * 4);
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(unaff_ESI + 4) +
                                                    ((iVar5 << ((byte)*(undefined2 *)unaff_ESI &
                                                               0x1f)) + iVar9) * 4);
              pfVar2 = (float *)(*(int *)(unaff_ESI + 4) + 4 +
                                ((iVar7 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar9) * 4);
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + 4 +
                                                    ((iVar5 << ((byte)*(undefined2 *)unaff_ESI &
                                                               0x1f)) + iVar9) * 4);
              pfVar2 = (float *)(*(int *)(unaff_ESI + 4) + 8 +
                                ((iVar7 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar9) * 4);
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + 8 +
                                                    ((iVar5 << ((byte)*(undefined2 *)unaff_ESI &
                                                               0x1f)) + iVar9) * 4);
              pfVar2 = (float *)(*(int *)(unaff_ESI + 4) + 0xc +
                                ((iVar7 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar9) * 4);
              iVar8 = iVar9 + 4;
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(unaff_ESI + 4) + 0xc +
                                                    ((iVar5 << ((byte)*(undefined2 *)unaff_ESI &
                                                               0x1f)) + iVar9) * 4);
              iVar1 = iVar9 + 7;
              iVar9 = iVar8;
            } while (iVar1 < param_2);
          }
          for (; iVar8 < param_2; iVar8 = iVar8 + 1) {
            pfVar2 = (float *)(*(int *)(unaff_ESI + 4) +
                              ((iVar7 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)) + iVar8) * 4);
            *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(unaff_ESI + 4) +
                                                  ((iVar5 << ((byte)*(undefined2 *)unaff_ESI & 0x1f)
                                                   ) + iVar8) * 4);
          }
          iVar8 = 0;
          iVar9 = iVar8;
          if (3 < param_2) {
            do {
              pfVar2 = (float *)(*(int *)(param_1 + 4) +
                                ((iVar7 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar9) * 4);
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(param_1 + 4) +
                                                    ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)
                                                     ) + iVar9) * 4);
              pfVar2 = (float *)(*(int *)(param_1 + 4) + 4 +
                                ((iVar7 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar9) * 4);
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(param_1 + 4) + 4 +
                                                    ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)
                                                     ) + iVar9) * 4);
              pfVar2 = (float *)(*(int *)(param_1 + 4) + 8 +
                                ((iVar7 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar9) * 4);
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(param_1 + 4) + 8 +
                                                    ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)
                                                     ) + iVar9) * 4);
              pfVar2 = (float *)(*(int *)(param_1 + 4) + 0xc +
                                ((iVar7 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar9) * 4);
              iVar8 = iVar9 + 4;
              *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(param_1 + 4) + 0xc +
                                                    ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f)
                                                     ) + iVar9) * 4);
              iVar1 = iVar9 + 7;
              iVar9 = iVar8;
            } while (iVar1 < param_2);
          }
          for (; iVar8 < param_2; iVar8 = iVar8 + 1) {
            pfVar2 = (float *)(*(int *)(param_1 + 4) +
                              ((iVar7 << ((byte)*(undefined2 *)param_1 & 0x1f)) + iVar8) * 4);
            *pfVar2 = *pfVar2 - fVar4 * *(float *)(*(int *)(param_1 + 4) +
                                                  ((iVar5 << ((byte)*(undefined2 *)param_1 & 0x1f))
                                                  + iVar8) * 4);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_2);
      local_18c = local_18c + 1;
      local_194 = local_194 + 1;
    } while (local_18c < param_2);
  }
  if (0x20 < param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_198);
  }
  return local_1a5;
}
