/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAA66FF96285E980394C9698651FED17CA3C514A9BB91EB238B37D4CEF0369B2
 * Entry: 0x002dab40, Ghidra index: 10274, label: FUN_002dab40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002dab40(void)

{
  float fVar1;
  bool bVar2;
  float *in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint32_t guest_index_address;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_1c;
  int local_14;
  int local_10;
  int local_c;
  
  fVar1 = *in_EAX;
  local_10 = 0;
  local_c = 0;
  bVar2 = false;
  local_14 = 7;
LAB_002dab65:
  do {
    if (bVar2) {
      local_10 = local_10 + 1;
    }
    if (0xfa < local_10) {
      return 0;
    }
    if (local_14 != 0) {
      local_14 = local_14 + -1;
      goto LAB_002dab9b;
    }
    iVar3 = FUN_002da330();
    if (iVar3 != 0) goto LAB_002dadda;
    do {
      do {
        do {
          local_10 = local_10 + 1;
          if (0xfa < local_10) {
            return 0;
          }
          local_c = 0;
          iVar3 = FUN_002db5a0();
          if (iVar3 == 0) {
            return 0;
          }
LAB_002dadda:
          local_14 = 7;
LAB_002dab9b:
          if ((int)in_EAX[0xf] <= (int)in_EAX[0x13]) {
            return 1;
          }
          iVar3 = *(int *)((int)in_EAX[0xd] + (int)in_EAX[0x13] * 4);
          if (0 < (int)in_EAX[0x1a]) {
            if ((in_EAX[0x1a] == 1.4013e-45) && (bVar2)) {
              FUN_002da9c0();
              iVar4 = FUN_002db280();
              if (iVar4 == 1) {
                in_EAX[0x1a] = 0.0;
              }
            }
            else {
              in_EAX[0x1a] = 1.4013e-45;
            }
          }
          if (ABS(*(float *)((int)in_EAX[9] + iVar3 * 4)) < fVar1) {
            fVar8 = in_EAX[0x13];
            if (fVar1 <= ABS(*(float *)((int)in_EAX[7] + iVar3 * 4))) goto LAB_002dae01;
LAB_002daf44:
            iVar3 = *(int *)((int)in_EAX[0xd] + (int)in_EAX[0x13] * 4);
            *(undefined4 *)((int)in_EAX[7] + iVar3 * 4) = 0;
            bVar2 = false;
            if (*(float *)((int)in_EAX[9] + iVar3 * 4) < 0.0) {
              *(undefined4 *)((int)in_EAX[9] + iVar3 * 4) = 0;
            }
            fVar8 = in_EAX[0x13];
            in_EAX[0x13] = (float)((int)fVar8 + 1);
            if ((int)in_EAX[0xf] <= (int)fVar8 + 1) goto LAB_002daf83;
            goto LAB_002dab65;
          }
          if (0.0 <= *(float *)((int)in_EAX[9] + iVar3 * 4)) goto LAB_002daf44;
          iVar4 = FUN_002db0a0();
        } while (iVar4 == 0);
        *(undefined4 *)((int)in_EAX[8] + iVar3 * 4) = 0x3f800000;
        FUN_002da250();
        iVar4 = 0;
        if (0 < (int)in_EAX[0x11]) {
          do {
            *(undefined4 *)((int)in_EAX[10] + *(int *)((int)in_EAX[0xd] + iVar4 * 4) * 4) = 0;
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)in_EAX[0x11]);
        }
        if (*(float *)((int)in_EAX[10] + iVar3 * 4) * in_EAX[3] <=
            -*(float *)((int)in_EAX[9] + iVar3 * 4)) {
          fVar6 = -NAN;
          fStack_1c = 1e+20;
        }
        else {
          fVar6 = in_EAX[0x13];
          fStack_1c = -(*(float *)((int)in_EAX[9] + iVar3 * 4) /
                       *(float *)((int)in_EAX[10] + iVar3 * 4));
        }
        fVar8 = 0.0;
        if (0 < (int)in_EAX[0x11]) {
          /* Original XBE 0x002DABA7 and 0x002DAC30 read an exact
           * DWORD from [ESI+0x34], then address [ECX+index*4].
           * This slot holds guest32 address bits, not a C float
           * numeric value. memcpy preserves the original 32 bits.
           * TODO/ABI_UNVERIFIED: translate this guest32 address when
           * executing on a native host. */
          memcpy(&guest_index_address, &in_EAX[0xd], sizeof(guest_index_address));
          piVar5 = (int *)(uintptr_t)guest_index_address;
          do {
            iVar3 = *piVar5;
            fVar7 = *(float *)((int)in_EAX[8] + iVar3 * 4);
            if (fVar7 < -fVar1) {
              fVar7 = -(*(float *)((int)in_EAX[7] + iVar3 * 4) / fVar7);
              if ((ABS(fVar7) < fVar1) && (*(float *)((int)in_EAX[7] + iVar3 * 4) < fVar1))
              goto LAB_002dad7d;
              if (fVar7 < fStack_1c + fVar1) {
                fVar6 = fVar8;
                fStack_1c = fVar7;
              }
            }
            fVar8 = (float)((int)fVar8 + 1);
            piVar5 = piVar5 + 1;
          } while ((int)fVar8 < (int)in_EAX[0x11]);
        }
        fVar8 = fVar6;
        fVar6 = in_EAX[0x11];
        if ((int)fVar6 < (int)in_EAX[0x13]) {
          piVar5 = (int *)((int)in_EAX[0xd] + (int)fVar6 * 4);
          do {
            fVar7 = *(float *)((int)in_EAX[10] + *piVar5 * 4);
            if ((fVar7 < -*in_EAX) &&
               (fVar7 = -(*(float *)((int)in_EAX[9] + *piVar5 * 4) / fVar7),
               fVar7 < fStack_1c - fVar1)) {
              fVar8 = fVar6;
              fStack_1c = fVar7;
            }
            fVar6 = (float)((int)fVar6 + 1);
            piVar5 = piVar5 + 1;
          } while ((int)fVar6 < (int)in_EAX[0x13]);
        }
        if (fStack_1c < 0.0) {
          fStack_1c = 0.0;
        }
        fVar7 = fStack_1c;
        if ((int)fVar8 < 0) {
          return 0;
        }
LAB_002dad7d:
        fStack_1c = fVar7;
      } while (in_EAX[3] < fStack_1c);
      if (*in_EAX <= fStack_1c) {
        local_c = 0;
        break;
      }
      local_c = local_c + 1;
    } while (((int)in_EAX[0xf] >> 1) + 2 < local_c);
    bVar2 = true;
    FUN_002dafe0(fStack_1c);
    if ((int)fVar8 < (int)in_EAX[0x11]) {
      *(undefined4 *)((int)in_EAX[7] + *(int *)((int)in_EAX[0xd] + (int)fVar8 * 4) * 4) = 0;
      fVar7 = (float)((int)in_EAX[0x11] + -1);
      in_EAX[0x11] = fVar7;
      fVar6 = in_EAX[0xd];
      iVar3 = *(int *)((int)fVar6 + (int)fVar8 * 4);
      iVar4 = *(int *)((int)fVar6 + (int)fVar7 * 4);
      *(int *)((int)fVar6 + (int)fVar7 * 4) = iVar3;
      *(int *)((int)in_EAX[0xd] + (int)fVar8 * 4) = iVar4;
      *(float *)((int)in_EAX[0xe] + iVar3 * 4) = fVar7;
      *(float *)((int)in_EAX[0xe] + iVar4 * 4) = fVar8;
      if (in_EAX[0x1a] == 0.0) {
        iVar3 = FUN_002dbd30();
        if (iVar3 != 1) {
          in_EAX[0x1a] = 2.8026e-45;
        }
      }
      else {
        in_EAX[0x25] = (float)((int)in_EAX[0x25] + -1);
      }
    }
    else if ((int)fVar8 < (int)in_EAX[0x13]) {
      if (*in_EAX < fStack_1c) {
        FUN_002daab0();
      }
      *(undefined4 *)((int)in_EAX[9] + *(int *)((int)in_EAX[0xd] + (int)fVar8 * 4) * 4) = 0;
      fVar6 = in_EAX[0xd];
      fVar7 = in_EAX[0x11];
      iVar3 = *(int *)((int)fVar6 + (int)fVar8 * 4);
      iVar4 = *(int *)((int)fVar6 + (int)fVar7 * 4);
      *(int *)((int)fVar6 + (int)fVar7 * 4) = iVar3;
      *(int *)((int)in_EAX[0xd] + (int)fVar8 * 4) = iVar4;
      *(float *)((int)in_EAX[0xe] + iVar3 * 4) = fVar7;
      *(float *)((int)in_EAX[0xe] + iVar4 * 4) = fVar8;
      in_EAX[0x11] = (float)((int)in_EAX[0x11] + 1);
      FUN_002da910();
    }
    else {
LAB_002dae01:
      FUN_002daab0();
      iVar3 = *(int *)((int)in_EAX[0xd] + (int)fVar8 * 4);
      *(undefined4 *)((int)in_EAX[9] + iVar3 * 4) = 0;
      if (*(float *)((int)in_EAX[7] + iVar3 * 4) < 0.0) {
        *(undefined4 *)((int)in_EAX[7] + iVar3 * 4) = 0;
      }
      fVar6 = in_EAX[0xd];
      iVar3 = *(int *)((int)fVar6 + (int)fVar8 * 4);
      fVar7 = in_EAX[0x11];
      iVar4 = *(int *)((int)fVar6 + (int)fVar7 * 4);
      *(int *)((int)fVar6 + (int)fVar7 * 4) = iVar3;
      *(int *)((int)in_EAX[0xd] + (int)fVar8 * 4) = iVar4;
      *(float *)((int)in_EAX[0xe] + iVar3 * 4) = fVar7;
      *(float *)((int)in_EAX[0xe] + iVar4 * 4) = fVar8;
      fVar8 = in_EAX[0x13];
      in_EAX[0x13] = (float)((int)fVar8 + 1);
      in_EAX[0x11] = (float)((int)in_EAX[0x11] + 1);
      if ((int)fVar8 + 1 < (int)in_EAX[0xf]) {
        FUN_002da910();
      }
      else {
LAB_002daf83:
        local_14 = 0;
      }
    }
  } while( true );
}
