/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23E9F3BC66DFB0883CDA06177A746444AA25AE465B21B868C53D1296BEDBBC87
 * Entry: 0x0008b790, Ghidra index: 1679, label: FUN_0008b790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008b790(void)

{
  int iVar1;
  int unaff_EBX;
  
  if (((*(byte *)(unaff_EBX + 0x6c) & 1) == 0) || (iVar1 = *(int *)(unaff_EBX + 0x68), iVar1 == 0))
  {
    if (*(int *)(unaff_EBX + 0x10) != 0) {
      return *(int *)(*(int *)(unaff_EBX + 0x10) + 0x5e4);
    }
    if (*(int *)(unaff_EBX + 0x1c) != 0) {
      iVar1 = FUN_000120f0();
      if (iVar1 != 0) {
        FUN_000120f0();
        iVar1 = FUN_00073510();
        return iVar1;
      }
    }
    iVar1 = FUN_00073510();
  }
  return iVar1;
}
