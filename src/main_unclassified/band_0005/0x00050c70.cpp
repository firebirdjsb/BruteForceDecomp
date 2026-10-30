/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B6BEE4540937C3BA76E846B6093243AD72596EA669E9F32FEEC6C9371AE0252
 * Entry: 0x00050c70, Ghidra index: 723, label: FUN_00050c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped XBE image address; ABI/relocations unverified. */
extern int FUN_001cca00(int param_1);
extern int FUN_001bddb0(int param_1);

void FUN_00050c70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x003089d0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      puVar2 = param_3 + 3;
      puVar3 = param_1 + 3;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_1[0x17] = param_3[0x17];
      FUN_001cca00(param_1 + 0x18);
      FUN_001bddb0(param_1 + 0x1c);
    }
    param_1 = param_1 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
