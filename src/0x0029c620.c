/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F136081D8410602E84E4100E06E91CEA3BA7FB6E90B785A71847042924CCBC75
 * Entry: 0x0029c620, Ghidra index: 9442, label: FUN_0029c620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_cannot_convert_number___s__in__s_00403e68[];
float10 FUN_0029c620(void)

{
  char cVar1;
  char *unaff_ESI;
  float10 fVar2;
  
  cVar1 = *unaff_ESI;
  fVar2 = (float10)FUN_00295660();
  if (fVar2 < (float10)0.0) {
    FUN_00295370(s_cannot_convert_number___s__in__s_00403e68);
  }
  fVar2 = (float10)(double)fVar2;
  if (cVar1 == '-') {
    fVar2 = -fVar2;
  }
  return fVar2;
}
