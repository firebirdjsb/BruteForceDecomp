/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFC631DB8A54BCD8F69CA8ECE9391204CEE7415C28991F828D23CE0CB96029B8
 * Entry: 0x00288180, Ghidra index: 9103, label: FUN_00288180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00288180(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *unaff_retaddr;
  
  puVar1 = (uint *)(**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2);
  puVar2 = (uint *)(**(code **)(*(int *)*unaff_retaddr + 0xc))((int *)*unaff_retaddr);
  if (*puVar1 < *puVar2) {
    FUN_00288200();
  }
  puVar1 = (uint *)(**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1);
  puVar2 = (uint *)(**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2);
  if (*puVar1 < *puVar2) {
    FUN_00288200();
  }
  puVar1 = (uint *)(**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2);
  puVar2 = (uint *)(**(code **)(*(int *)*unaff_retaddr + 0xc))((int *)*unaff_retaddr);
  if (*puVar1 < *puVar2) {
    FUN_00288200();
  }
  return;
}
