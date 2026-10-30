/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 305C655922C6324B33998F6BD61A3D6B5967C2232ECDACA1D5759F9F8A4AB7BC
 * Entry: 0x000c89f0, Ghidra index: 2476, label: FUN_000c89f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000c89f0(int param_1)

{
  int in_EAX;
  int iVar1;
  
  if ((*(byte *)(in_EAX + 0x70) & 1) != 0) {
    return 0;
  }
  if (*(int *)(in_EAX + 0x59c) != 0) {
    iVar1 = FUN_0005be70();
    if ((iVar1 != 0) && (in_EAX != *(int *)(param_1 + 0x68))) {
      return 0;
    }
  }
  return 1;
}
