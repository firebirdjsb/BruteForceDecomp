/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8956D89F61363FDD510403BF6194A0EAB4693EF3C3BD1B9260ED465C73AFEDA1
 * Entry: 0x0001fb30, Ghidra index: 155, label: FUN_0001fb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0001fb30(float param_1)

{
  if (3.1415927 < param_1) {
    return (float10)param_1 - (float10)6.2831855;
  }
  if ((float10)param_1 < (float10)-3.1415927) {
    return (float10)param_1 + (float10)6.2831855;
  }
  return (float10)param_1;
}
