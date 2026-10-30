/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35AB9385F611B7CC01692DF3C26CE41E8A1957981C65557C7E5A34AFC8510950
 * Entry: 0x0003d650, Ghidra index: 448, label: FUN_0003d650
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0003d650(float param_1,float param_2,float param_3)

{
  if (param_3 <= param_1) {
    param_3 = param_1;
  }
  if (param_2 <= param_3) {
    param_3 = param_2;
  }
  return (float10)param_3;
}
