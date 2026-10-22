/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9DE249B36AC3997E0CC28ABC2F3C3068BE4B7A667C8C06619E3E1D1FB88D411
 * Entry: 0x002e2d40, Ghidra index: 10382, label: FUN_002e2d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e2d40(short param_1)

{
  int in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_002e3ec0();
    iVar1 = *(int *)(in_ECX + 0x4c8) * 0x10;
    *(int *)(iVar1 + 200 + in_ECX) = (int)uVar2;
    *(int *)(iVar1 + 0xcc + in_ECX) = (int)((ulonglong)uVar2 >> 0x20);
    *(short *)((*(int *)(in_ECX + 0x4c8) + 0xd) * 0x10 + in_ECX) = param_1;
    *(uint *)(in_ECX + 0x4c8) = *(int *)(in_ECX + 0x4c8) + 1U & 0x3f;
  }
  return;
}
