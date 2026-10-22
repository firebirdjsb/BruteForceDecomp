/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B0CEDF46327E0912B9F265CEC214F3F5DF8BCDE250917A52480971771ACB949
 * Entry: 0x0015e840, Ghidra index: 4552, label: FUN_0015e840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0015e840(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
}
