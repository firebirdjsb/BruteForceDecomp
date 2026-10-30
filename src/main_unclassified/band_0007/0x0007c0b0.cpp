/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CF4165431CA729C779B756AB183AD466B8BC2907E1F8DD213AA1546D1BCE72F
 * Entry: 0x0007c0b0, Ghidra index: 1475, label: FUN_0007c0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dcc8;
extern uint32_t DAT_0040dcf4;
extern uint32_t *DAT_004432f8;
undefined4 FUN_0007c0b0(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 ****ppppuVar4;
  char ****ppppcVar5;
  undefined1 *unaff_EBX;
  undefined4 ***pppuStack_4c;
  int *piStack_48;
  char ***pppcStack_44;
  uint local_38;
  char ***local_34;
  undefined4 ***apppuStack_30 [2];
  uint uStack_28;
  undefined4 *local_24;
  undefined4 ***local_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  local_20 = (undefined4 ***)0xf;
  local_24 = (undefined4 *)0x0;
  local_34 = (char ***)((uint)local_34 & 0xffffff00);
  pcVar1 = &DAT_0040dcf4;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  pppcStack_44 = (char ***)(pcVar3 + -0x40dcf4);
  piStack_48 = (int *)&DAT_0040dcf4;
  pppuStack_4c = (undefined4 ***)0x7c0e8;
  FUN_0001fed0();
  pppcStack_44 = (char ***)0x0;
  piStack_48 = (int *)0x7c0fa;
  FUN_000784c0();
  pppcStack_44 = local_34;
  if (local_20 < (undefined4 ***)0x10) {
    pppcStack_44 = (char ***)&local_34;
  }
  piStack_48 = DAT_004432f8;
  pppuStack_4c = (undefined4 ***)0x7c11b;
  cVar2 = (**(code **)(*DAT_004432f8 + 0x24))();
  if (cVar2 == '\0') {
    uStack_c = 0xf;
    uStack_10 = 0;
    local_20 = (undefined4 ***)((uint)local_20 & 0xffffff00);
    if (uStack_28 < 0x10) {
      /* XBE 0x0007C15C: LEA EAX,[ESP+0x0C] selects the inline
       * small-string buffer at guest frame offset -0x34. */
      unaff_EBX = (undefined1 *)&local_34;
    }
    pppuStack_4c = (undefined4 ***)&local_24;
    FUN_000791c0(unaff_EBX);
    pppuStack_4c = local_20;
    if (uStack_c < 0x10) {
      pppuStack_4c = &local_20;
    }
    cVar2 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8);
    if (cVar2 == '\0') {
      pcVar1 = &DAT_0040dcc8;
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      FUN_0001fed0(&DAT_0040dcc8,pcVar3 + -0x40dcc8);
      FUN_000784c0(0);
      ppppcVar5 = (char ****)pppcStack_44;
      if (apppuStack_30[0] < (undefined4 ****)0x10) {
        ppppcVar5 = &pppcStack_44;
      }
      cVar2 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,ppppcVar5);
      if (cVar2 == '\0') {
        ppppuVar4 = (undefined4 ****)pppuStack_4c;
        if (local_38 < 0x10) {
          ppppuVar4 = &pppuStack_4c;
        }
        FUN_000791c0(ppppuVar4,&local_34);
        if (uStack_1c < 0x10) {
          apppuStack_30[0] = apppuStack_30;
        }
        cVar2 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,apppuStack_30[0]);
        if (cVar2 == '\0') {
          FUN_000519c0();
          FUN_000519c0();
          return 0;
        }
      }
      FUN_000519c0();
      FUN_000519c0();
      return 1;
    }
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(uStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    uStack_28 = uStack_28 & 0xffffff00;
    if ((undefined4 ****)0xf < apppuStack_30[0]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(pppcStack_44);
    }
  }
  else if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return 1;
}
