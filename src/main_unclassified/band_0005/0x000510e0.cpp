/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49CF51F305B0DAC1A8E5FB28B10995ED0E01DD4871E3521E3C31D56688D2324C
 * Entry: 0x000510e0, Ghidra index: 731, label: FUN_000510e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped XBE image address; ABI/relocations unverified. */
void FUN_000510e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = ((unsigned char *)(uintptr_t)0x00308fd0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      puVar2 = param_1 + 3;
      puVar3 = param_3 + 3;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      param_3[0x17] = param_1[0x17];
      FUN_001cca00(param_3 + 0x18);
      FUN_001bddb0(param_3 + 0x1c);
    }
    param_3 = param_3 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
