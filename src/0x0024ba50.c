/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F0067D789A65EEECD982813559669B4B891D194FB608409FCA07D4C5240BD832
 * Entry: 0x0024ba50, Ghidra index: 8261, label: FUN_0024ba50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024ba50(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *in_EAX = *param_1;
    in_EAX = in_EAX + 1;
  }
  return;
}
