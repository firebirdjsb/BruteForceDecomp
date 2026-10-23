/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 577AE0239A4A6379618B7261DB4BA7B1371C985540A7F71F8E768C8DAA2BD952
 * Entry: 0x0014da70, Ghidra index: 4373, label: FUN_0014da70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014da70(void)

{
  char cVar1;
  int unaff_EDI;
  int local_8;
  int local_4;
  
  FUN_0014d960(&local_8,(int *)(unaff_EDI + 0x1c0),1);
  cVar1 = FUN_0014d680(local_8,local_4);
  if (cVar1 != '\0') {
    *(int *)(unaff_EDI + 0x1c0) = local_8;
    *(int *)(unaff_EDI + 0x1c4) = local_4;
  }
  if ((local_8 == 10) && (local_4 == -1)) {
    return 0;
  }
  return 1;
}
