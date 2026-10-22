/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52537845E447AF390E0A52EAFD2A5B85C3D6A93F47466CF9F668FC4AC3D911E3
 * Entry: 0x002bd3f0, Ghidra index: 9945, label: FUN_002bd3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd3f0(int param_1)

{
  byte *in_EAX;
  
  if (*(ushort *)(param_1 + 0x24) <= *(ushort *)(param_1 + 0x26)) {
    FUN_002ccf80();
  }
  *(byte **)(*(int *)(param_1 + 0x28) + (uint)*(ushort *)(param_1 + 0x26) * 4) = in_EAX;
  *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
  if ((*in_EAX & 0xc) == 0) {
    if (*(ushort *)(param_1 + 0x30) <= *(ushort *)(param_1 + 0x32)) {
      FUN_002ccf80();
    }
    *(byte **)(*(int *)(param_1 + 0x34) + (uint)*(ushort *)(param_1 + 0x32) * 4) = in_EAX;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
    FUN_002bdfc0(param_1 + 8);
    FUN_002bdfc0(param_1);
    FUN_002bdfc0(param_1 + 0x10);
  }
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
  return;
}
