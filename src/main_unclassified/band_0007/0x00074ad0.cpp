/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD4BB2A454832361D3D058A2E127FD5E22BAC255EBE7C75E0A11B6F3CF1AB1D4
 * Entry: 0x00074ad0, Ghidra index: 1331, label: FUN_00074ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00074ad0(void)

{
  int *piVar1;
  int in_ECX;
  int unaff_EBX;
  int local_8;
  int local_4;
  
  if (*(int *)(unaff_EBX + 4) != 0) {
    local_8 = FUN_00075f00((uint *)(in_ECX + 4));
    if ((local_8 == *(int *)(unaff_EBX + 0x28)) ||
       (*(uint *)(in_ECX + 4) < *(uint *)(local_8 + 0xc))) {
      local_4 = *(int *)(unaff_EBX + 0x28);
      piVar1 = &local_4;
    }
    else {
      piVar1 = &local_8;
    }
    if (*piVar1 != *(int *)(unaff_EBX + 0x28)) {
      *(undefined4 *)(*piVar1 + 0x1c) = *(undefined4 *)(unaff_EBX + 0x1c);
    }
  }
  return;
}
