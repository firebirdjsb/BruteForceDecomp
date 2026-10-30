/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB939144309EA63582D76AA1AE7518A132F386CCA3816AC5AEB80230EC2EC8AC
 * Entry: 0x002f5c31, Ghidra index: 10904, label: XCloseContentSignatures
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XCloseContentSignatures(undefined4 *param_1)

{
  *param_1 = 0;
  LocalFree(param_1);
  return;
}
