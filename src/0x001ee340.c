/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CD54DE754596343B15021E78E805CE5B83C9B43762400F3CB818FB9BBE10CD9
 * Entry: 0x001ee340, Ghidra index: 6957, label: FUN_001ee340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
extern uint32_t DAT_00469b58;
void FUN_001ee340(void)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *unaff_EBP;
  int iVar8;
  int unaff_ESI;
  undefined4 unaff_EDI;
  wchar_t *pwVar9;
  bool bVar10;
  wchar_t *pwVar11;
  int local_1c;
  wchar_t *local_18;
  int local_14;
  int iStack_10;
  int local_8;
  int local_4;
  
  local_14 = unaff_ESI + 0x2e30;
  pwVar7 = (wchar_t *)(unaff_ESI + 0x670);
  iVar6 = -0x670 - unaff_ESI;
  local_1c = DAT_004698d0;
  iVar8 = 1;
  local_4 = iVar6;
  do {
    local_8 = iVar6 + (int)pwVar7;
    if (*(int *)(unaff_ESI + 0x1c) == 5) {
      bVar10 = *(int *)(pwVar7 + -0x288) == local_1c;
    }
    else {
      bVar10 = *(int *)(pwVar7 + -0x288) != -1;
    }
    if (bVar10) {
      if (*(int *)(pwVar7 + -0x284) == -1) {
        local_18 = pwVar7;
        iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))();
        iStack_10 = iVar3;
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24c))(iVar8,*(undefined4 *)(iVar3 + 8));
        iVar6 = -1;
        if (*(int *)(unaff_ESI + 0x1c) != 0) {
          cVar2 = FUN_002e5880();
          if (cVar2 == '\0') {
            iVar6 = FUN_002e5bf0(0);
            iVar6 = *(int *)(iVar6 + 0x2c);
          }
          else {
            iVar6 = 0;
          }
        }
        if (*(int *)(iVar3 + 8) == iVar6) {
          iVar6 = *(int *)(iVar3 + 4);
          *(int *)(iVar6 * 0x2c + 0xac + unaff_ESI) = iVar8;
          *(undefined4 *)((iVar6 + 4) * 0x2c + unaff_ESI) = 0xffffffff;
          *(int *)(unaff_ESI + 0xa8) = *(int *)(unaff_ESI + 0xa8) + 1;
          cVar2 = FUN_002e5880();
          if (cVar2 != '\0') {
            *(int *)(unaff_ESI + 0x5768) = iVar8;
          }
        }
        *(undefined1 *)(pwVar7 + -0x28a) = 1;
        if ((*(int *)(iVar3 + 0xc) == 0xa6de845) || (*(int *)(iVar3 + 0xc) == 0x15a3164e)) {
          local_1c = 0x1bf1c03d;
          uVar4 = FUN_001e97c0(iVar8);
          FUN_002ea9a9(unaff_EBP,0x40,uVar4);
          pwVar7 = unaff_EBP;
        }
        else {
          _wcsncpy(pwVar7,(wchar_t *)(iVar3 + 0x18),0x40);
        }
        iVar6 = DAT_00469b58;
        *(undefined4 *)(pwVar7 + 0x40) = unaff_EDI;
        (**(code **)(**(int **)(iVar6 + 8) + 0x250))(iVar8);
        pwVar1 = local_18;
        iVar6 = 0;
        pwVar7 = pwVar7 + -0x282;
        pwVar11 = unaff_EBP;
        do {
          if (iVar6 < 0xd) {
            *(int *)pwVar7 = iVar6 + iVar8;
            pwVar9 = pwVar7;
            for (iVar5 = 9; pwVar9 = pwVar9 + 2, iVar3 = local_1c, iVar5 != 0; iVar5 = iVar5 + -1) {
              pwVar9[0] = L'\0';
              pwVar9[1] = L'\0';
            }
          }
          else {
            pwVar7[0] = L'\xffff';
            pwVar7[1] = L'\xffff';
          }
          pwVar11[0] = L'\xffff';
          iVar5 = DAT_00469b58;
          pwVar11[1] = L'\xffff';
          iVar6 = iVar6 + 1;
          pwVar11 = pwVar11 + 0x14;
          pwVar7 = pwVar7 + 0x14;
        } while (iVar6 < 0x20);
        *(int *)((int)local_18 + unaff_ESI + 0x164) = iVar8 + 0xd;
        local_18 = (wchar_t *)0x1fc473e7;
        (**(code **)(**(int **)(iVar5 + 8) + 600))(&local_18,*(undefined4 *)(iVar3 + 8),iVar8);
        *(undefined1 *)(unaff_ESI + 0x5633 + *(int *)(iVar3 + 8) * 0x18) = 1;
        *(undefined4 *)((int)pwVar1 + unaff_ESI + 0x160) = 0xffffffff;
        iVar6 = local_4;
        pwVar7 = local_18;
      }
      else {
        pwVar7[-0xffffffff00000288] = L'\xffff';
        pwVar7[-0xffffffff00000287] = L'\xffff';
        pwVar7[-0xffffffff00000002] = L'\xffff';
        pwVar7[-0xffffffff00000001] = L'\xffff';
      }
    }
    iVar8 = iVar8 + 1;
    local_14 = local_14 + 0x500;
    pwVar7 = pwVar7 + 0x2cc;
  } while (iVar8 < 9);
  return;
}
