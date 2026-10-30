/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C99878978363F09D1D94ADDA740DC2323B774C7A89802005DD53DD9FD7E4E5F1
 * Entry: 0x00129e30, Ghidra index: 3757, label: FUN_00129e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00307130; extern label; definition/role pending. */
extern unsigned char LAB_00307130;

void FUN_00129e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307130;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = *in_ECX;
    puVar1[3] = in_ECX[1];
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
