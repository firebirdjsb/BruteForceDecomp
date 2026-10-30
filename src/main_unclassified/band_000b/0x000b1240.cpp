/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B8B33129872716E43F8D091327763942C31C53898DBDCF4190E8446B395678B
 * Entry: 0x000b1240, Ghidra index: 2111, label: FUN_000b1240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x00307190; original label address; definition and semantics pending. */
extern unsigned char LAB_00307190;

void FUN_000b1240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307190;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1 = puVar1 + 2;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_4;
      param_4 = param_4 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
