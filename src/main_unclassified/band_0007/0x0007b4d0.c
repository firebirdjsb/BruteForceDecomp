/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0903CDC5D5AFD7E459422BDC86B2432B0C2BA498C04037E617D18019221315A6
 * Entry: 0x0007b4d0, Ghidra index: 1467, label: FUN_0007b4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400554;
extern uint32_t DAT_00400568;
extern uint32_t DAT_0040dd4c;
extern char s_gameflags_0040dd1c[];
extern char s_gameflags_s_0040dd3c[];
undefined4 FUN_0007b4d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_ESI;
  char *pcVar3;
  int unaff_retaddr;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  unaff_ESI[param_1 + 0x173] = (int)puVar1;
  iVar2 = (**(code **)(*unaff_ESI + 0x1a4))(param_1);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x9c) == 0)) {
    pcVar3 = s_gameflags_0040dd1c;
    puVar1 = DAT_00400554;
    if (DAT_00400568 < 0x10) {
      puVar1 = &DAT_00400554;
    }
    FUN_002eaa19(&stack0xfffffef8,0x104,s_gameflags_s_0040dd3c,puVar1);
  }
  else {
    if (*(uint *)(iVar2 + 0x1c) < 0x10) {
      pcVar3 = (char *)(iVar2 + 8);
    }
    else {
      pcVar3 = *(char **)(iVar2 + 8);
    }
    puVar1 = DAT_00400554;
    if (DAT_00400568 < 0x10) {
      puVar1 = &DAT_00400554;
    }
    if (*(uint *)(iVar2 + 0x1c) < 0x10) {
      iVar2 = iVar2 + 8;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
    FUN_002eaa19(&stack0xfffffef8,0x104,&DAT_0040dd4c,iVar2,puVar1);
  }
  iVar2 = unaff_ESI[unaff_retaddr + 0x173];
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  FUN_00077fb0(iVar2,pcVar3);
  return 1;
}
