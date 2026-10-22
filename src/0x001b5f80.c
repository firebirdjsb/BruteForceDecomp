/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBB4348C1A9F9A59646DCCEA50EC62420CF231EE7C1397B59FD2199A006C9AA2
 * Entry: 0x001b5f80, Ghidra index: 5687, label: FUN_001b5f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b5f80(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001d6370(param_3);
    FUN_00087460();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
