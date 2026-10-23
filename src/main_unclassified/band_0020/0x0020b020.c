/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69B0E30A3E20126F2BD99B8803B178874B09D432D0887D8A8B875F42C79C4FDF
 * Entry: 0x0020b020, Ghidra index: 7335, label: FUN_0020b020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_0020b020(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001fedb0(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0x1ee6584d)) {
    if ((char)param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x40);
      return '\x01';
    }
    *(undefined4 *)(in_ECX + 0x40) = *param_3;
    cVar1 = '\x01';
  }
  return cVar1;
}
