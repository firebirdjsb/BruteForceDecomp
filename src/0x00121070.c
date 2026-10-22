/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 75D1C37AF3DC0A60034D1FB1C906E359C2F507E47905DCABB0AD7E59D9BB62A5
 * Entry: 0x00121070, Ghidra index: 3651, label: FUN_00121070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00121070(void)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 0x2e8);
  FUN_0014a610();
  (**(code **)(*(int *)(iVar1 + 0xbc) + 0x38))();
  *(undefined1 *)(unaff_EBX + 0x6a0) = 0;
  *(byte *)(*(int *)(unaff_EBX + 0x2e8) + 0x1c8) =
       *(byte *)(*(int *)(unaff_EBX + 0x2e8) + 0x1c8) & 0xfe;
  *(undefined1 *)(unaff_EBX + 0x7e8) = 0;
  return;
}
