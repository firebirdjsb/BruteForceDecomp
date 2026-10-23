/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDF827E025A4C0861A9BAC4C14B933295927AFE035D10A750FFAD5343DAE73E5
 * Entry: 0x000eda60, Ghidra index: 2952, label: FUN_000eda60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000eda60(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_000ecdc0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0x1d05c4b2)) {
    if ((char)param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x38);
      return '\x01';
    }
    *(undefined4 *)(in_ECX + 0x38) = *param_3;
    cVar1 = '\x01';
  }
  return cVar1;
}
