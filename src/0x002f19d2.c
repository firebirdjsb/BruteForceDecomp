/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 699260E3A9A0153FDC223A8CB1281A8CA52E7A2CE655AEB34FCFB2EA21F113DF
 * Entry: 0x002f19d2, Ghidra index: 10785, label: FUN_002f19d2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fa0;
void FUN_002f19d2(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_84;
  undefined1 local_80 [48];
  undefined8 local_50;
  uint local_40;
  
  local_84 = (uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_002f1a1b:
    uVar2 = 8;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else if (iVar1 == 3) {
    uVar2 = 0x11;
  }
  else if (iVar1 == 4) {
    uVar2 = 0x12;
  }
  else {
    if (iVar1 == 5) goto LAB_002f1a1b;
    if (iVar1 == 7) {
      *param_2 = 1;
      goto LAB_002f1a77;
    }
    if (iVar1 != 8) goto LAB_002f1a77;
    uVar2 = 0x10;
  }
  iVar1 = FUN_002ec6bb(uVar2,param_2 + 6,local_84);
  if (iVar1 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_50 = *(undefined8 *)(param_2 + 4);
      local_40 = local_40 & 0xffffffe3 | 3;
    }
    else {
      local_40 = local_40 & 0xfffffffe;
    }
    FUN_002ec417(local_80,&local_84,uVar2,param_1,param_2 + 2,param_2 + 6);
  }
LAB_002f1a77:
  __ctrlfp(local_84,0xffff);
  if (((*param_2 != 8) && (DAT_004a8fa0 == 0)) && (iVar1 = FUN_002bf0a0(param_2), iVar1 != 0)) {
    return;
  }
  __set_errno(*param_2);
  return;
}
