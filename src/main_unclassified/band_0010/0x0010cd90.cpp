/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CE38B53B339CB403E5A387E3EA36EE140E64526F5AF0D0AF19032035084D169
 * Entry: 0x0010cd90, Ghidra index: 3482, label: FUN_0010cd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010cd90(void)

{
  int in_ECX;
  
  (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))();
                    /* WARNING: Could not recover jumptable at 0x0010cda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(in_ECX + 0x154) + 0xc))();
  return;
}
