/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 841A53CDCFC0681C3D0205D5C9BC873B239DB4CC06595EA8F7580373C1DB0A01
 * Entry: 0x000ff650, Ghidra index: 3193, label: FUN_000ff650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00308500; extern address-only, definition TODO. */
extern unsigned char LAB_00308500;

int FUN_000ff650(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00308500;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar2 = FUN_00061500(param_1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_8 = 0;
  puVar1 = *(undefined4 **)(param_2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    uVar3 = **(undefined4 **)(param_1 + 4);
  }
  FUN_00142bf0(param_1,uVar3,uVar2,puVar1);
  *unaff_FS_OFFSET = local_10;
  return param_1;
}
