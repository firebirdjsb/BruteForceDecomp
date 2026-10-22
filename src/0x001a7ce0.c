/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF44239713530E1CD7E693AFEC071AA35D52D25DA07AC088AFBBA00ECEB82E88
 * Entry: 0x001a7ce0, Ghidra index: 5417, label: FUN_001a7ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a7ce0(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_EDI + 8) - *(int *)(unaff_EDI + 4)) / 0x3c;
    if (iVar1 != 0) goto LAB_001a7d17;
  }
  FUN_001ac9b0();
LAB_001a7d17:
  FUN_001b2ec0(0);
  return iVar1 * 0x3c + *(int *)(unaff_EDI + 4);
}
