/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F775E2043B385C2040E65DEBE33A476B2A43CC54538814F42D3DCD8CE9376D97
 * Entry: 0x001f7430, Ghidra index: 7046, label: FUN_001f7430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f7430(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int local_4;
  
  iVar2 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 0x128);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(*(int *)(param_1 + 0x38) + 300) - iVar1 >> 2;
  }
  local_4 = 0;
  if (0 < param_1) {
    do {
      puVar3 = (undefined4 *)0x0;
      if (*(undefined4 **)(unaff_EBX + 0x28) != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)**(undefined4 **)(unaff_EBX + 0x28);
      }
      do {
        if (puVar3 == *(undefined4 **)(unaff_EBX + 0x28)) goto LAB_001f74e5;
        iVar1 = puVar3[2];
        puVar3 = (undefined4 *)*puVar3;
      } while ((iVar1 == 0) ||
              (*(int *)(*(int *)(*(int *)(iVar2 + 0x38) + 0x128) + local_4 * 4) !=
               *(int *)(iVar1 + 4)));
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)FUN_000d0aa0(*(undefined2 *)(iVar1 + 0x20));
        puVar3[1] = 0;
        *puVar3 = *(undefined4 *)(iVar2 + 0x1c);
        if (*(int *)(iVar2 + 0x1c) != 0) {
          *(undefined4 **)(*(int *)(iVar2 + 0x1c) + 4) = puVar3;
        }
        *(undefined4 **)(iVar2 + 0x1c) = puVar3;
        if (*(int *)(iVar2 + 0x20) == 0) {
          *(undefined4 **)(iVar2 + 0x20) = puVar3;
        }
        *(byte *)(iVar1 + 0x26) = *(byte *)(iVar1 + 0x26) | 4;
      }
LAB_001f74e5:
      local_4 = local_4 + 1;
    } while (local_4 < param_1);
  }
  return;
}
