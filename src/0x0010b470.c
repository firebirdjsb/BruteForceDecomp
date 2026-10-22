/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82C168E587A5DAE84EA8E58FC22C34D32FC83E23183D16D27B3FF2B1D4623447
 * Entry: 0x0010b470, Ghidra index: 3446, label: FUN_0010b470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x003084f0; extern label; definition/role pending. */
extern unsigned char LAB_003084f0;

int FUN_0010b470(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003084f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 5;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar1 != 0) {
    if (uVar1 < 0x8000000) {
      iVar2 = FUN_002ea01d(uVar1 * 0x20);
      *(int *)(param_1 + 4) = iVar2;
      *(int *)(param_1 + 8) = iVar2;
      *(uint *)(param_1 + 0xc) = uVar1 * 0x20 + iVar2;
    }
    else {
      FUN_00038940(param_1);
    }
    local_8 = 0;
    uVar3 = FUN_0010bc20(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
