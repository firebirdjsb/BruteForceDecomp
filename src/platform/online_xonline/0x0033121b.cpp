/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5633AB8229BF0D8ED0529A5AC13F254C8E558E8D666CB9449B31C8ECBEEC8E7F
 * Entry: 0x0033121b, Ghidra index: 12391, label: FUN_0033121b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0498;
extern uint32_t DAT_004b04ac;
undefined1 FUN_0033121b(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  undefined1 local_1c4 [384];
  int local_44 [5];
  undefined1 local_30 [4];
  undefined1 local_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  code *local_8;
  
  local_10 = 0x989251c;
  local_c = (int *)0xaa258d4a;
  local_8 = XboxHDKey_exref;
  XcHMAC(&DAT_004b04ac,0x10,XboxHDKey_exref,0x10,0,0,local_30);
  XcHMAC(&DAT_004b0498,0x10,local_8,0x10,0,0,local_2c);
  XcDESKeyParity(local_30,0x18);
  XcKeyTable(1,local_1c4,local_30);
  XcBlockCryptCBC(1,0x10,param_1,param_1,local_1c4,0,&local_10);
  pcVar3 = *(code **)(in_ECX + 0x538) + -1;
  if (-1 < (int)pcVar3) {
    local_c = (int *)(in_ECX + 0x53c + (int)pcVar3 * 4);
    local_8 = *(code **)(in_ECX + 0x538);
    do {
      iVar4 = *local_c;
      local_18 = 0xb7a8357b;
      local_14 = 0x7a43ed27;
      XcHMAC(&DAT_004b04ac,0x10,iVar4 + 0x50,0x10,0,0,local_30);
      XcHMAC(&DAT_004b0498,0x10,iVar4 + 0x50,0x10,0,0,local_2c);
      XcDESKeyParity(local_30,0x18);
      XcKeyTable(1,local_1c4,local_30);
      XcBlockCryptCBC(1,0x10,param_1,param_1,local_1c4,0,&local_18);
      local_c = local_c + -1;
      local_8 = local_8 + -1;
    } while (local_8 != (code *)0x0);
  }
  XcHMAC((uintptr_t)0x004b0508U,0x10,param_1,0x10,0,0,local_44);
  iVar4 = 5;
  piVar5 = local_44;
  do {
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = iVar4 + -1;
    iVar2 = *param_2;
    iVar1 = *piVar5;
    piVar5 = piVar5 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 == iVar2);
  return 0;
}
