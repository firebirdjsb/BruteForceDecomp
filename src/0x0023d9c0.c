/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59863CC4656E154ECC57BC7AB5F07100A6E1EE7B3D7B8CE5A59F7FC3E71C8CAC
 * Entry: 0x0023d9c0, Ghidra index: 7962, label: FUN_0023d9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d9c0(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int *in_EDX;
  
  if (in_EDX != (int *)0xffffffff) {
    piVar1 = *(int **)(in_EAX + 0xc);
    piVar2 = *(int **)(in_EAX + 8);
    if (piVar2 != piVar1) {
      do {
        if ((int *)*piVar2 == in_EDX) break;
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
      if ((piVar2 != piVar1) && (*in_EDX == 1)) {
        *(byte *)(in_EDX[1] + 0x1c) = *(byte *)(in_EDX[1] + 0x1c) & 0xfe;
      }
    }
  }
  return;
}
