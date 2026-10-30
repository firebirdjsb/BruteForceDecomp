/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3361ADC0EB54EFAC172DC4CCF6194835422CAB2C0B55B7785CA410AE6DD0CD9A
 * Entry: 0x00241550, Ghidra index: 8009, label: FUN_00241550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241550(void)

{
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(unaff_ESI + 8) - *(int *)(unaff_ESI + 4)) / 0x2c;
    if (iVar1 != 0) goto LAB_00241585;
  }
  FUN_002426f0();
LAB_00241585:
  FUN_00243a40(0);
  return iVar1 * 0x2c + *(int *)(unaff_ESI + 4);
}
