/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79D9F4784217A29EDC8B3D7F93E8215B7D16579A917B30BC3E666BE0FC53F9C6
 * Entry: 0x00074420, Ghidra index: 1320, label: FUN_00074420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00074420(void)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = 4;
  do {
    in_EAX = in_EAX + 1;
    if (*in_EAX != 0) {
      (**(code **)(**(int **)(*in_EAX + 4) + 0xc))();
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
