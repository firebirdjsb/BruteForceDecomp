/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F996A0F1551D4C70C48686A7E046664F356F808D04C7B609E0AB7ADDD5B86257
 * Entry: 0x001586a0, Ghidra index: 4499, label: FUN_001586a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001586a0(void)

{
  int *in_ECX;
  undefined1 auStack_8 [4];
  int iStack_4;
  
  FUN_000e4420();
  FUN_000e43b0();
  (**(code **)(*in_ECX + 0xbc))();
  FUN_0015a1d0();
  FUN_000e0860(auStack_8);
  if ((*(byte *)(in_ECX[3] + 0xa8) & 1) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    FUN_000e0950(auStack_8);
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 4) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    FUN_000e0950(auStack_8);
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 2) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    FUN_000e0950(auStack_8);
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((*(byte *)(in_ECX[3] + 0xa8) & 8) != 0) {
    iStack_4 = 0;
    FUN_0008f6a0();
    FUN_000e0950(auStack_8);
    if (iStack_4 != 0) {
      FUN_0008f6e0();
    }
  }
  if ((0 < *(short *)((int)in_ECX + 0x72)) && (*(int *)(in_ECX[2] + 0x1f8) != 0)) {
    FUN_00057140();
  }
  FUN_00155560();
  return;
}
