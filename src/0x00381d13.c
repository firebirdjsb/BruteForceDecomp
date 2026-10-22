/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19C364ADB420CBFBF49A442CA875ED12B51F6C6AC16316438761009E4E209FD4
 * Entry: 0x00381d13, Ghidra index: 13578, label: FUN_00381d13
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern void FUN_00381955(undefined4 *param_1,int param_2);
extern void FUN_00381b3b(undefined4 *param_1,int param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f664;
extern uint32_t *DAT_0040f668;
void FUN_00381d13(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xf;
  iVar2 = param_1[4];
  if ((param_2 & 0xc0000000) == 0xc0000000) {
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(uint *)(iVar2 + 0x10) = param_2;
    IofCompleteRequest();
    IoStartNextPacket(*param_1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x4f) = 0;
    *(undefined4 *)((int)param_1 + 0x53) = 0;
    *(undefined4 *)((int)param_1 + 0x57) = 0;
    *(undefined4 *)((int)param_1 + 0x5b) = 0;
    *(undefined2 *)(param_1 + 0xd) = 8;
    *(undefined1 *)((int)param_1 + 0x36) = 2;
    if ((*(byte *)((int)param_1 + 0xf) & 8) == 0) {
      param_1[0xc] = FUN_00381955;
    }
    else {
      param_1[0xc] = FUN_00381b3b;
    }
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) | 0x10;
    puVar1 = (undefined4 *)(iVar2 + 0x54);
    if ((undefined4 **)DAT_0040f664 == &DAT_0040f664) {
      *puVar1 = &DAT_0040f664;
      *(undefined4 ***)(iVar2 + 0x58) = &DAT_0040f664;
      DAT_0040f664 = puVar1;
      DAT_0040f668 = puVar1;
      (*(code *)param_1[0xc])(param_1,0);
    }
    else {
      *puVar1 = &DAT_0040f664;
      *(undefined4 **)(iVar2 + 0x58) = DAT_0040f668;
      *DAT_0040f668 = puVar1;
      DAT_0040f668 = puVar1;
    }
  }
  return;
}
