/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6538EB13032A5FC913C69A64297D8F94C9B709B51569A4C6BC3643A3E847071
 * Entry: 0x002e3850, Ghidra index: 10412, label: FUN_002e3850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e3850(undefined1 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    *param_1 = *(undefined1 *)(*(int *)(in_ECX + 0x10) + 8 + *(int *)(in_ECX + 0x18) * 0xc);
    return;
  }
  *param_1 = 0;
  return;
}
