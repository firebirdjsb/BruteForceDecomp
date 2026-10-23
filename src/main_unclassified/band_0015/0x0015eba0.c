/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA634018068317216FF882CAF5227CF097217995DEBFDCD3D5376384297D1F48
 * Entry: 0x0015eba0, Ghidra index: 4561, label: FUN_0015eba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015eba0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
    in_EAX[6] = in_ECX[6];
    in_EAX[7] = in_ECX[7];
  }
  return;
}
