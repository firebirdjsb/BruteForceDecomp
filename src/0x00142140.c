/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA0279D96FF0E7CB32CB9521F32277909BF3F4B9AEFAE0242462AD1C2049A3A1
 * Entry: 0x00142140, Ghidra index: 4118, label: FUN_00142140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Label VA 0x00309550 verified mapped; data/code role unknown. */
extern unsigned char LAB_00309550;

undefined1 * FUN_00142140(undefined1 *param_1)

{
  int iVar1;
  undefined1 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00309550;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = *in_ECX;
  iVar1 = FUN_002ad910(param_1);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = 0;
  FUN_00141d40();
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
