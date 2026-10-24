/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4AA55BAA0DCF8A68EFD34D7B2610D84164E248D5E02B7509F00F1E093DCCCA16
 * Entry: 0x00100300, Ghidra index: 3216, label: FUN_00100300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_004a5b74;
extern char s_someone_is_using_get_string_0040dbb4[];
bool FUN_00100300(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  uint in_ECX;
  bool bVar5;
  float unaff_EBX;
  int unaff_EDI;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float local_218;
  float local_210;
  float fStack_208;
  float local_204 [129];
  
  if ((char)in_ECX < '\0') {
    iVar1 = *(int *)(unaff_EDI + 0xb0) + -1;
  }
  else {
    if ((in_ECX & 0x100) == 0) {
      fVar3 = (float)((-(uint)((in_ECX & 0x200) != 0) & 9) + 1);
      bVar6 = (in_ECX & 8) != 0;
      local_218 = 0.0;
      local_210 = 0.0;
      if (bVar6) {
        local_218 = (float)-(int)fVar3;
      }
      bVar7 = (in_ECX & 0x10) != 0;
      if (bVar7) {
        local_218 = fVar3;
      }
      bVar8 = (in_ECX & 0x20) != 0;
      if (bVar8) {
        local_210 = (float)-(int)fVar3;
      }
      bVar5 = bVar8 || (bVar7 || bVar6);
      if ((in_ECX & 0x40) == 0) {
        if (!bVar8 && (!bVar7 && !bVar6)) {
          if ((in_ECX & 1) == 0) {
            return bVar5;
          }
          DAT_004a5b74 = (uint)(DAT_004a5b74 == 0);
          bVar5 = true;
          goto LAB_00100475;
        }
      }
      else {
        bVar5 = true;
        local_210 = fVar3;
      }
      piVar4 = (int *)FUN_00101120();
      if (piVar4 != (int *)0x0) {
        local_204[0] = (float)piVar4[4];
        fVar3 = (float)piVar4[6];
        if (DAT_004a5b74 == 0) {
          piVar4[5] = (int)((float)(int)local_218 + (float)piVar4[5]);
          (**(code **)(*piVar4 + 0x1c))();
          piVar4[6] = (int)((float)(int)local_210 + fVar3);
          (**(code **)(*piVar4 + 0x1c))();
        }
        else {
          piVar4[3] = (int)((float)(int)local_218 + (float)piVar4[3]);
          piVar4[4] = (int)((float)(int)local_210 + local_204[0]);
          (**(code **)(*piVar4 + 0x1c))();
        }
      }
      goto LAB_00100475;
    }
    iVar1 = *(int *)(unaff_EDI + 0xb0) + 1;
  }
  *(int *)(unaff_EDI + 0xb0) = iVar1;
  iVar2 = *(int *)(unaff_EDI + 0x74);
  bVar5 = true;
  if (iVar1 == -3) {
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EDI + 0xb0) = 0xffffffff;
    }
    else {
      *(int *)(unaff_EDI + 0xb0) = (*(int *)(unaff_EDI + 0x78) - iVar2 >> 2) + -1;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_EDI + 0x78) - iVar2 >> 2;
    }
    if (iVar2 <= iVar1) {
      *(undefined4 *)(unaff_EDI + 0xb0) = 0xfffffffe;
    }
  }
LAB_00100475:
  iVar1 = FUN_00101120();
  if (iVar1 != 0) {
    fVar3 = *(float *)(iVar1 + 0x18);
    local_204[0] = *(float *)(iVar1 + 0x10);
    XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
    FUN_002ea9a9(local_204,0x100,(uintptr_t)0x0040cc38U,0,(double)fVar3,
                 (double)fStack_208,(double)unaff_EBX,(double)local_218);
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar4 + 0xc))();
  }
  return bVar5;
}
