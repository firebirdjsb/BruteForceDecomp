/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CF4D522CF4F63B060C2FB6A0F8F2AF6E524F66D1E4E02E18BA4FDBA54C35FA9
 * Entry: 0x00129f40, Ghidra index: 3759, label: FUN_00129f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00306eb0; extern label; definition/role pending. */
extern unsigned char LAB_00306eb0;

void FUN_00129f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00306eb0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1 = puVar1 + 2;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_4;
      param_4 = param_4 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
