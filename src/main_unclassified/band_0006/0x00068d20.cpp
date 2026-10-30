/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77ADBAA150ABE6999C8C2C76ECCA8F98BB157DE25408A9DFD417BE010AE7023D
 * Entry: 0x00068d20, Ghidra index: 1159, label: FUN_00068d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_001ea830(void);
extern float10 FUN_002ea51b(double param_1);
extern int FUN_001ec5d0(int param_1,int param_2);
extern int FUN_001ec680(int param_1);
extern void FUN_001ee700(void);
extern void FUN_001ec480(void);
extern void FUN_001e7640(undefined4 param_1);
extern void FUN_000691e0(int param_1,float param_2);
extern void FUN_001e7690(undefined4 param_1);

extern uint32_t DAT_0040de58;
extern uint32_t *DAT_00443314;
extern uint32_t DAT_004698d0;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b4c;
extern uint32_t DAT_00469b60;
extern uint32_t DAT_0046d064;
extern uint32_t _DAT_003ffc10;
extern uint32_t _DAT_00469910;
extern uint32_t _DAT_0046991c;
extern uint32_t _DAT_00469920;
extern uint32_t _DAT_00469b50;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068d20(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  float10 fVar15;
  undefined8 uVar16;
  int *unaff_retaddr;
  undefined4 uVar17;
  undefined4 uVar18;
  float fStack_20;
  float fStack_1c;
  
  fVar15 = (float10)(**(code **)(*param_1 + 0x40))();
  fStack_1c = (float)fVar15;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    fStack_1c = 1.0;
  }
  fVar4 = (float)(((float10)*(longlong *)(param_1 + 0x12) / (float10)*(longlong *)(param_1 + 0x1e))
                 * (float10)fStack_1c);
  cVar7 = (**(code **)(*(int *)param_1[2] + 0x24))();
  if (cVar7 != '\0') {
    _DAT_00469910 = 1;
  }
  FUN_001ea830();
  (**(code **)(*(int *)param_1[2] + 8))(fVar4);
  if ((char)unaff_retaddr[0x16] == '\0') {
    cVar7 = (**(code **)(*unaff_retaddr + 0x14))();
    if (cVar7 == '\0') {
      fVar4 = (float)_DAT_003ffc10;
      if (0.0 < fVar4) {
        fVar5 = 1.0 / fVar4;
        uVar13 = unaff_retaddr[0x14];
        uVar10 = unaff_retaddr[0x15];
        uVar14 = unaff_retaddr[0x10] + unaff_retaddr[0x12];
        piVar11 = unaff_retaddr + 0x14;
        lVar1 = *(longlong *)(unaff_retaddr + 0x12);
        lVar2 = *(longlong *)(unaff_retaddr + 0x1e);
        DAT_00469b4c = fVar5;
        if ((uVar13 != 0 || uVar10 != 0) && (*(int *)(DAT_0046995c + 0x1c) != 0)) {
          if (((int)uVar10 < 1) && ((0x7fffffff < uVar10 || (uVar13 <= uVar14)))) {
            iVar8 = *piVar11;
            *piVar11 = 0;
            uVar14 = uVar14 - iVar8;
            unaff_retaddr[0x15] = 0;
          }
          else {
            *piVar11 = uVar13 - uVar14;
            unaff_retaddr[0x15] = uVar10 - (uVar13 < uVar14);
            uVar14 = 0;
          }
        }
        fVar6 = (float)(int)uVar14;
        if ((int)uVar14 < 0) {
          fVar6 = fVar6 + 4.2949673e+09;
        }
        lVar3 = *(longlong *)(unaff_retaddr + 0x1e);
        fVar15 = (float10)FUN_002ea51b((double)((fVar6 / (float)lVar3) * fVar4));
        if (DAT_00469b60 != '\0') {
          DAT_00469b60 = '\0';
        }
        iVar8 = FUN_001ec5d0(DAT_0046995c,2);
        iVar9 = FUN_001ec680();
        if (iVar9 < 1) {
          unaff_retaddr[0x10] = uVar14;
          unaff_retaddr[0x11] = 0;
        }
        else {
          uVar16 = __allmul(unaff_retaddr[0x1e],unaff_retaddr[0x1f],
                            (int)((float)(iVar9 * 1000) * fVar5),0);
          uVar16 = __alldiv(uVar16,1000,0);
          unaff_retaddr[0x10] = uVar14 - (uint)uVar16;
          unaff_retaddr[0x11] = -(uint)(uVar14 < (uint)uVar16) - (int)((ulonglong)uVar16 >> 0x20);
        }
        if (iVar8 < (int)fVar15) {
          unaff_retaddr[0x10] = 0;
          unaff_retaddr[0x11] = 0;
        }
        _DAT_00469b50 = iVar9;
        if ((*(int *)(DAT_0046995c + 0x1c) == 0) && ((fStack_20 != 1.0 || (DAT_0040de58 != '\0'))))
        {
          DAT_00469b4c = (fVar6 / (float)lVar3) * fStack_20;
          unaff_retaddr[0x10] = 0;
          unaff_retaddr[0x11] = 0;
          unaff_retaddr[0x14] = 0;
          iVar9 = 1;
          unaff_retaddr[0x15] = 0;
        }
        XAPILIB__QueryPerformanceCounter();
        iVar8 = iVar9;
        if (0 < iVar9) {
          do {
            DAT_004698d0 = DAT_004698d0 + 1;
            _DAT_0046991c = 0;
            _DAT_00469920 = 0;
            uVar10 = (uint)(DAT_00469b4c * 1000.0);
            uVar13 = unaff_retaddr[0xe];
            unaff_retaddr[0xe] = uVar13 + uVar10;
            unaff_retaddr[0xf] =
                 unaff_retaddr[0xf] + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar13,uVar10);
            FUN_001ee700();
            FUN_001ec480();
            FUN_001e7640();
            (**(code **)(*DAT_00443314 + 0x50))(DAT_00443314,DAT_00469b4c);
            (**(code **)(**(int **)((int)(float)((float10)lVar1 / (float10)lVar2) + 8) + 0xc))
                      (DAT_00469b4c);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        XAPILIB__QueryPerformanceCounter();
        uVar10 = unaff_retaddr[0x24] - unaff_retaddr[0x22];
        uVar13 = unaff_retaddr[0x26];
        unaff_retaddr[0x26] = uVar13 + uVar10;
        unaff_retaddr[0x27] =
             unaff_retaddr[0x27] +
             ((unaff_retaddr[0x25] - unaff_retaddr[0x23]) -
             (uint)((uint)unaff_retaddr[0x24] < (uint)unaff_retaddr[0x22])) +
             (uint)CARRY4(uVar13,uVar10);
        if (((iVar9 == 0) && (*(int *)(DAT_0046995c + 0x1c) == 5)) &&
           ((char)unaff_retaddr[0x2e] == '\0')) {
          DAT_00469b60 = '\x01';
        }
        FUN_000691e0(iVar9,(float)((float10)lVar1 / (float10)lVar2));
        uVar13 = unaff_retaddr[0x24] - unaff_retaddr[0x22];
        iVar8 = (unaff_retaddr[0x25] - unaff_retaddr[0x23]) -
                (uint)((uint)unaff_retaddr[0x24] < (uint)unaff_retaddr[0x22]);
        if ((iVar8 < 0) || ((iVar8 < 1 && (uVar13 <= uVar14)))) {
          unaff_retaddr[0x14] = 0;
          unaff_retaddr[0x15] = 0;
        }
        else {
          unaff_retaddr[0x14] = uVar13 - uVar14;
          unaff_retaddr[0x15] = iVar8 - (uint)(uVar13 < uVar14);
        }
        if ((iVar9 == 0) && (*(int *)(DAT_0046995c + 0x1c) != 5)) {
          if (*(int *)(DAT_0046995c + 0x1c) == 4) {
            *(undefined1 *)((int)unaff_retaddr + 0xb9) = 0;
            piVar11 = (int *)(**(code **)(*(int *)unaff_retaddr[2] + 0x78))();
            iVar8 = *piVar11;
            uVar18 = 1;
            uVar17 = 0x3f000000;
            uVar12 = FUN_001e97c0();
            (**(code **)(iVar8 + 0xc))(uVar12,uVar17,uVar18);
          }
          FUN_001e7690(fStack_1c);
          piVar11 = (int *)(**(code **)(*(int *)unaff_retaddr[2] + 0x78))();
          (**(code **)(*piVar11 + 0x44))(fStack_1c);
          return;
        }
        if ((*(int *)(DAT_0046995c + 0x1c) == 5) && (*(char *)((int)unaff_retaddr + 0xb9) == '\0'))
        {
          *(undefined1 *)((int)unaff_retaddr + 0xb9) = 1;
          piVar11 = (int *)(**(code **)(*(int *)unaff_retaddr[2] + 0x78))();
          (**(code **)(*piVar11 + 8))(&DAT_0046d064,0,0);
          return;
        }
      }
    }
    else if (((((char)unaff_retaddr[0x16] == '\0') && (*(char *)(DAT_0046995c + 0xa0) == '\0')) &&
             (*(int *)(DAT_0046995c + 0x1c) != 4)) &&
            (cVar7 = (**(code **)(*unaff_retaddr + 0x14))(), cVar7 != '\0')) {
      FUN_001e7640(fVar4);
      (**(code **)(*(int *)unaff_retaddr[2] + 0x10))(fVar4);
      return;
    }
  }
  return;
}
