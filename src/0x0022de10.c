/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C70D54B287508CB9CFFE2E8C972178BF1AC8719BF8B2A4ABA5F7182E8ACBE5D
 * Entry: 0x0022de10, Ghidra index: 7719, label: FUN_0022de10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
extern uint32_t PTR_FUN_003a4f64;
void FUN_0022de10(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *unaff_ESI;
  undefined1 local_6c [4];
  undefined **local_68;
  int iStack_5c;
  int local_48;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  if (unaff_ESI[0x6c] == 0) goto LAB_0022df0a;
  FUN_00012320(0x30);
  FUN_0004d230(local_6c,(float)*(int *)(unaff_ESI[0x8a] + 0xe8),0x3f800000);
  iVar4 = *(int *)(unaff_ESI[0x6c] + 8);
  if (iVar4 == 0) {
    iVar4 = *(int *)(unaff_ESI[0x6c] + 0x10);
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0xb0), *(int *)(*(int *)(iVar4 + 0xc) + 4) == 3))
    goto LAB_0022deb0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x1d4);
LAB_0022deb0:
    if (iVar4 != 0) {
      (**(code **)(*(int *)(*(int *)(iVar4 + 0x2e8) + 0x178) + 0x20))();
    }
  }
  local_68 = &PTR_FUN_003a4f64;
  if (local_48 != 0) {
    FUN_0008f6e0();
  }
  if (iStack_5c != 0) {
    FUN_0008f6e0();
  }
LAB_0022df0a:
  if ((*(byte *)(unaff_ESI + 0x89) & 0x20) != 0) {
    cVar1 = FUN_0022dcc0();
    if (unaff_ESI[0xd9] != 0) {
      cVar2 = (**(code **)(*DAT_00469940 + 0x2c))(unaff_ESI[0xd9]);
      (**(code **)(*DAT_00469940 + 0x20))(unaff_ESI[0xd9],cVar2 == '\0');
      unaff_ESI[0xd9] = 0;
    }
    piVar3 = (int *)FUN_00076310();
    if (*piVar3 != 0) {
      iVar4 = FUN_0017c170(DAT_00469984);
      unaff_ESI[0xd9] = iVar4;
      if (iVar4 != 0) {
        cVar2 = '>';
        (**(code **)(*DAT_00469940 + 0x50))(iVar4,0);
        FUN_0003f010();
        if (cVar1 == '\0') {
          (**(code **)(*unaff_ESI + 0x40))();
        }
        else {
          (**(code **)(*unaff_ESI + 0x40))();
        }
        FUN_00040f10();
        if (cVar2 != '\0') {
          uStack_34 = 1;
          uStack_38 = 0xbdaaaa7e;
        }
        cVar1 = FUN_0017c110(&stack0xffffff88,0);
        if (cVar1 == '\0') {
          (**(code **)(*DAT_00469940 + 0x20))(unaff_ESI[0xd9],1);
          unaff_ESI[0xd9] = 0;
          return;
        }
        *(byte *)(unaff_ESI + 0x89) = *(byte *)(unaff_ESI + 0x89) | 8;
      }
    }
  }
  return;
}
