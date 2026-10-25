/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCC5C328FAA497A2F92E73CDC7352A5259DBF13AA029364B584B7D5E268B30E0
 * Entry: 0x001590a0, Ghidra index: 4502, label: FUN_001590a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbd0;
extern char s__08X_p_08X_0040c874[];
void FUN_001590a0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 auStack_144 [2];
  char local_142;
  char cStack_141;
  int *local_140;
  int *piStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined4 auStack_130 [12];
  undefined1 auStack_100 [256];
  
  if ((-1 < *(char *)((int)in_ECX + 0x26)) && (*(int *)(in_ECX[3] + 0x134) != 0)) {
    iVar4 = *(int *)(*(int *)in_ECX[0x1b] + 0x24);
    if ((iVar4 != 0) &&
       ((*(int *)(iVar4 + 4) != 0 && (iVar4 = *(int *)(*(int *)(iVar4 + 4) + 8), iVar4 != 0)))) {
      piVar3 = (int *)FUN_002ea01d(0xc);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *(undefined1 *)(piVar3 + 2) = 1;
      }
      *piVar3 = in_ECX[0x1b];
      *(undefined1 *)(piVar3 + 2) = 1;
      local_140 = piVar3;
      iVar4 = (**(code **)(*in_ECX + 0x158))(iVar4,1);
      piVar3[1] = iVar4;
      FUN_001611d0();
    }
    iVar4 = *(int *)(in_ECX[3] + 4);
    if (((iVar4 == 2) || (iVar4 == 0x1a)) || (local_142 = '\0', iVar4 == 0x1f)) {
      local_142 = '\x01';
    }
    piVar3 = (int *)FUN_00236cf0(1);
    while ((piVar3 != (int *)0x0 && (piVar3 != (int *)0xffffffff))) {
      piVar6 = (int *)piVar3[0x17];
      iVar4 = *(int *)piVar3[4];
      cStack_141 = '\0';
      local_140 = (int *)0x0;
      if (piVar6 == (int *)0x0) {
        iVar1 = *(int *)(*piVar3 + 0x24);
        if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) &&
           (iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8), iVar1 != 0)) {
          if ((local_142 == '\0') || (iVar4 != 0xfb850ce)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
          /* XBE 0x0015922C writes BL to BYTE [ESP+0x30], the low byte
           * of the guest DWORD also stored at 0x00159110. The upper
           * 24 bits are not overwritten by this instruction and must not
           * be guessed or zero-filled; guest register ABI remains TODO. */
          uStack_138 = (uStack_138 & UINT32_C(0xffffff00)) | (uint32_t)(uint8_t)cVar2;
          FUN_002eaa19(auStack_100,0xff,s__08X_p_08X_0040c874,in_ECX[1],piVar3);
          if (local_142 == '\0') {
            fStack_134 = *(float *)(in_ECX[3] + 0x138);
          }
          else {
            fStack_134 = *(float *)(in_ECX[3] + 0x138) * 100.0;
          }
          local_140 = (int *)(**(code **)(*in_ECX + 0x154))
                                       (iVar1,uStack_138,fStack_134,auStack_100,piVar3 + 5);
          piStack_13c = (int *)FUN_002ea01d(0xc);
          if (piStack_13c == (int *)0x0) {
            piStack_13c = (int *)0x0;
          }
          else {
            *(undefined1 *)(piStack_13c + 2) = 1;
          }
          *piStack_13c = (int)piVar3;
          piStack_13c[1] = (int)local_140;
          FUN_001611d0();
          if (cVar2 == '\0') {
            cStack_141 = '\x01';
          }
          goto LAB_001592c0;
        }
      }
      else {
        cVar2 = (**(code **)(*piVar6 + 0xc4))(&local_140);
        if (cVar2 == '\0') {
          (**(code **)(*piVar6 + 0xb8))(param_1);
          (**(code **)(*piVar6 + 0xc4))(auStack_144);
        }
        if ((local_142 == '\0') || (iVar4 != 0xfb850ce)) {
          cStack_141 = (int *)piVar6[0x1b] == piVar3;
        }
LAB_001592c0:
        if ((local_140 != (int *)0x0) && (cStack_141 != '\0')) {
          piVar5 = (int *)FUN_002ea01d(0x10);
          piVar6 = (int *)0x0;
          if (piVar5 != (int *)0x0) {
            piVar5[1] = 0;
            piVar5[2] = 0;
            *piVar5 = (int)&PTR_LAB_0039dbd0;
            piVar5[3] = -1;
            piVar6 = piVar5;
          }
          piVar6[3] = (int)piVar3;
          piVar6[2] = (int)local_140;
          auStack_130[7] = 0;
          puVar7 = auStack_130;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          auStack_130[4] = 0x49742400;
          auStack_130[5] = 0x49742400;
          auStack_130[6] = 0x49742400;
          auStack_130[8] = 0x49742400;
          auStack_130[0] = 0x3f4ccccd;
          auStack_130[1] = 0x3f800000;
          auStack_130[2] = 0x3f4ccccd;
          auStack_130[3] = 0x3f800000;
          iVar4 = FUN_002ea01d(0x60);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_002b9980();
          }
          piVar6[1] = iVar4;
          (**(code **)(*piVar6 + 4))();
          piStack_13c = piVar6;
          FUN_001611d0();
          piStack_13c = piVar6;
          FUN_001611d0();
        }
      }
      piVar3 = (int *)FUN_00236d50();
    }
    in_ECX[0x52] = 0;
    if ((in_ECX[0x5e] != 0) && (in_ECX[0x5f] - in_ECX[0x5e] >> 2 != 0)) {
      *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) | 0x80;
      iVar4 = *(int *)(in_ECX[3] + 4);
      if ((iVar4 != 2) &&
         (((iVar4 != 0x1a && (iVar4 != 0x1f)) &&
          (iVar4 = (**(code **)(*in_ECX + 0x1c))(), iVar4 == 0)))) {
        *(uint *)(in_ECX[0x1b] + 0x44) = *(uint *)(in_ECX[0x1b] + 0x44) | 0x80;
        FUN_000dfb40(in_ECX);
      }
    }
  }
  return;
}
