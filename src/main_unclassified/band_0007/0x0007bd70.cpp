/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7848ACC21041F16235B0144A16050492B978C17687D0CCF129B9CA4EE67212BD
 * Entry: 0x0007bd70, Ghidra index: 1472, label: FUN_0007bd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00077820(void);
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_000784c0(uint param_1);
extern bool FUN_002f30bc(undefined4 param_1);
extern void FUN_000791c0(undefined4 param_1);
extern undefined1 FUN_0007bef0(void);

extern uint32_t DAT_0040dcc8;
extern uint32_t *DAT_004432f8;
undefined4 FUN_0007bd70(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  undefined4 ***pppuVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 unaff_EBP;
  undefined4 **local_3c [2];
  undefined4 **local_34;
  uint uStack_30;
  undefined4 **ppuStack_28;
  undefined4 local_24;
  undefined4 **local_20 [2];
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  iVar1 = *(int *)(in_ECX + 0x64c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      FUN_00077820(iVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0x14));
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  local_20[0] = (undefined4 **)0xf;
  local_24 = 0;
  local_34 = (undefined4 **)((uint)local_34 & 0xffffff00);
  pcVar2 = &DAT_0040dcc8;
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  FUN_0001fed0(&DAT_0040dcc8,pcVar4 + -0x40dcc8);
  FUN_000784c0(0);
  pppuVar5 = (undefined4 ***)local_34;
  if (local_20[0] < (undefined4 **)0x10) {
    pppuVar5 = &local_34;
  }
  cVar3 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,pppuVar5);
  if (cVar3 != '\0') {
    pppuVar5 = (undefined4 ***)local_3c[0];
    if (ppuStack_28 < (undefined4 ***)0x10) {
      pppuVar5 = local_3c;
    }
    FUN_002f30bc(pppuVar5);
  }
  uStack_c = 0xf;
  uStack_10 = 0;
  local_20[0] = (undefined4 **)((uint)local_20[0] & 0xffffff00);
  if (ppuStack_28 < (undefined4 ***)0x10) {
    local_3c[0] = local_3c;
  }
  FUN_000791c0(local_3c[0],&local_24);
  pppuVar5 = (undefined4 ***)local_20[0];
  if (uStack_c < 0x10) {
    pppuVar5 = local_20;
  }
  cVar3 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,pppuVar5);
  if (cVar3 != '\0') {
    pppuVar5 = (undefined4 ***)ppuStack_28;
    if (uStack_14 < 0x10) {
      pppuVar5 = &ppuStack_28;
    }
    FUN_002f30bc(pppuVar5);
  }
  uVar6 = FUN_0007bef0(1);
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(ppuStack_28);
  }
  uStack_14 = 0xf;
  uStack_18 = 0;
  ppuStack_28 = (undefined4 **)((uint)ppuStack_28 & 0xffffff00);
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EBP);
  }
  return uVar6;
}
