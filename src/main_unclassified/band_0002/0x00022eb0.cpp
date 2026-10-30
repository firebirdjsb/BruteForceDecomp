/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA403465C08634106D0A78BD2A9EC5ED12FE3B8A48A5192FFA5F033E00D89B9F
 * Entry: 0x00022eb0, Ghidra index: 210, label: FUN_00022eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00022eb0(void)

{
  uint uVar1;
  uint uVar2;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 0x88);
  uVar2 = uVar1 >> 0x11 & 7;
  if (uVar2 == 0xffffffff) {
    *(uint *)(in_EDX + 0x88) = uVar1 | 0xe0000;
    return uVar1 >> 0xf & 0xffffff01;
  }
  *(uint *)(in_EDX + 0x88) = uVar1 | 0xe0000;
  return (uint)(uVar2 != 0);
}
