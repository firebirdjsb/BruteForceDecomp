/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 069053814E59FA102CD7C263A07F2FC4345AD0811686DDA9D44273ACB87CB5FA
 * Entry: 0x0014d8f0, Ghidra index: 4371, label: FUN_0014d8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014d8f0(void)

{
  char cVar1;
  int unaff_EDI;
  int local_8;
  int local_4;
  
  FUN_0014d7c0(&local_8,(int *)(unaff_EDI + 0x1c0),1);
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
