/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20622F01948F791A79FB5150355DBF13D06F14A7F9E059194627C50E18032F31
 * Entry: 0x003310cc, Ghidra index: 12390, label: FUN_003310cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0498;
extern uint32_t DAT_004b04ac;
void FUN_003310cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int in_ECX;
  undefined1 local_1ac [384];
  undefined1 local_2c [4];
  undefined1 local_28 [20];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_14 = in_ECX;
  XcHMAC(&LAB_004b0508,0x10,param_1,0x10,0,0,param_2);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x538) != 0) {
    param_2 = (int *)(in_ECX + 0x53c);
    do {
      iVar1 = *param_2;
      local_10 = 0xb7a8357b;
      local_c = 0x7a43ed27;
      XcHMAC(&DAT_004b04ac,0x10,iVar1 + 0x50,0x10,0,0,local_2c);
      XcHMAC(&DAT_004b0498,0x10,iVar1 + 0x50,0x10,0,0,local_28);
      XcDESKeyParity(local_2c,0x18);
      XcKeyTable(1,local_1ac,local_2c);
      XcBlockCryptCBC(1,0x10,param_1,param_1,local_1ac,1,&local_10);
      local_8 = local_8 + 1;
      param_2 = param_2 + 1;
    } while (local_8 < *(uint *)(local_14 + 0x538));
  }
  pcVar2 = XboxHDKey_exref;
  local_10 = 0x989251c;
  local_c = 0xaa258d4a;
  XcHMAC(&DAT_004b04ac,0x10,XboxHDKey_exref,0x10,0,0,local_2c);
  XcHMAC(&DAT_004b0498,0x10,pcVar2,0x10,0,0,local_28);
  XcDESKeyParity(local_2c,0x18);
  XcKeyTable(1,local_1ac,local_2c);
  XcBlockCryptCBC(1,0x10,param_1,param_1,local_1ac,1,&local_10);
  return;
}
