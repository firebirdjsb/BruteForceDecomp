/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0FC18DFDCA8E17734B178FE8772E4F867BD02A5CAE007DF69EB91D009D6CC4F
 * Entry: 0x00139d70, Ghidra index: 3968, label: FUN_00139d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00139d70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    *(byte *)(in_EAX + 2) =
         *(byte *)(in_EAX + 2) ^ (*(byte *)(in_ECX + 2) ^ *(byte *)(in_EAX + 2)) & 1;
    in_EAX[4] = 0;
    if (in_ECX[4] != 0) {
      FUN_0008f6a0(in_ECX[4]);
    }
  }
  return;
}
