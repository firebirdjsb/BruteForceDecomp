/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9A4CAD57D7F72638786B209B83396473013B1A52658D36C5F847826E5380F70B
 * Entry: 0x002e9cc0, Ghidra index: 10563, label: FUN_002e9cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x002e9d3e) */

void FUN_002e9cc0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iStack_3c;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  if ((uint)(*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0x14)) < uVar1) {
    iStack_3c = 0;
    FUN_002e9b20();
    iVar2 = FUN_002e9970(param_1);
    if (iVar2 < 0) {
      return;
    }
    if (iVar2 < 0) {
      return;
    }
  }
  FUN_002e4130(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x14),
               *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0x14),0);
  FUN_002e9970(param_1);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + iStack_3c;
  return;
}
