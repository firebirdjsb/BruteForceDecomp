/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B7292603508869666007A6F8EB2C7824B4042B547BE7CFB2B1ACF36160261C6
 * Entry: 0x003385e8, Ghidra index: 12476, label: FUN_003385e8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_003385e8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    uVar1 = 0x80150005;
  }
  else {
    FUN_00330c3b(param_1);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0xa4);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_1 + 0xe0);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 200);
      param_4[1] = *(undefined4 *)(param_1 + 0xcc);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(param_1 + 0xc0);
      param_5[1] = *(undefined4 *)(param_1 + 0xc4);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(param_1 + 0xac);
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = *(undefined4 *)(param_1 + 0xb8);
      param_7[1] = *(undefined4 *)(param_1 + 0xbc);
    }
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xdf;
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}
