/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 225587F60215F7F941AEA4D2962FDC7596ECDDD7C5958C5573894F9F50FAE44C
 * Entry: 0x002be8b0, Ghidra index: 9975, label: FUN_002be8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be8b0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_EAX < (int)(*(ushort *)(in_ECX + 2) - 1)) {
    do {
      *(undefined4 *)(*(int *)(in_ECX + 4) + in_EAX * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 4) + 4 + in_EAX * 4);
      in_EAX = in_EAX + 1;
    } while (in_EAX < (int)(*(ushort *)(in_ECX + 2) - 1));
  }
  *(short *)(in_ECX + 2) = *(short *)(in_ECX + 2) + -1;
  return;
}
