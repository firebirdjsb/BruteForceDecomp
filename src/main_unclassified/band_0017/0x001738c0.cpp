/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A7A8193EAB6A61427483E9C5454BECC1970A02DEBC1291714362D283A87BCC6
 * Entry: 0x001738c0, Ghidra index: 4892, label: FUN_001738c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001738c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_000120f0();
  if (iVar1 != 0) {
    uVar2 = FUN_000120f0();
    piVar3 = (int *)(-(uint)((*(byte *)(uVar2 + 0x26) & 0x40) != 0) & uVar2);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x48))(param_2);
    }
  }
  return 0;
}
