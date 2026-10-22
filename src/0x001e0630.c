/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82654D5E5422D3C7186DD4F01D6A35ADF4458D13455905292777CFCB31F139CA
 * Entry: 0x001e0630, Ghidra index: 6706, label: FUN_001e0630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e0630(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309900;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 0x18) = 0xf;
      *(undefined4 *)(param_3 + 0x14) = 0;
      if (*(uint *)(param_3 + 0x18) < 0x10) {
        puVar1 = (undefined1 *)(param_3 + 4);
      }
      else {
        puVar1 = *(undefined1 **)(param_3 + 4);
      }
      *puVar1 = 0;
      FUN_0001f4f0(param_1,0,0xffffffff);
      FUN_001ccf30(param_3 + 0x1c);
      FUN_001ccf30(param_3 + 0x2c);
      FUN_001e0dd0(param_3 + 0x3c);
    }
    param_3 = param_3 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
