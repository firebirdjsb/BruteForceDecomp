/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EAC3A2C1E32C218C329EFA818A508878B6934E7F2ACB336D7294861976A5E18
 * Entry: 0x002da8e0, Ghidra index: 10270, label: FUN_002da8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002da8e0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x68) == 0) {
    iVar1 = FUN_002dbd30();
    if (iVar1 != 1) {
      *(undefined4 *)(unaff_ESI + 0x68) = 2;
      return;
    }
  }
  else {
    *(int *)(unaff_ESI + 0x94) = *(int *)(unaff_ESI + 0x94) + -1;
  }
  return;
}
