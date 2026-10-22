/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27845516D5B34C0AD061534139524557AFD1E73253ED7481043371F6133ED652
 * Entry: 0x00330bd2, Ghidra index: 12371, label: FUN_00330bd2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00330bd2(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_c04;
  undefined4 local_c00;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  
  if (in_ECX == 0) {
    uVar1 = 0x80150005;
  }
  else {
    local_c04 = 0;
    local_bfc = 0;
    local_bf8 = 0;
    local_bf0 = 0;
    local_bec = *(undefined4 *)(in_ECX + 8);
    local_c00 = param_1;
    local_bf4 = *(undefined4 *)(in_ECX + 4);
    FUN_00330b50(&local_c04);
    uVar1 = 0;
  }
  return uVar1;
}
