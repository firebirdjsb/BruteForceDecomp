/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34B6532148D323B660879B24AC22A8392AEFF0AF5AE014BDF9A779DDFE2EE725
 * Entry: 0x000ed2f0, Ghidra index: 2948, label: FUN_000ed2f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000ed2f0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_000ecdc0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0xb6b92ba)) {
    if ((char)param_1 != '\0') {
      FUN_0015efb0();
      return '\x01';
    }
    FUN_0015f0b0();
    cVar1 = '\x01';
  }
  return cVar1;
}
