/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BCC2B678A1A40BCD7604D8606DBC8D9E8333C41166690F4B6459142F2634A99
 * Entry: 0x0008af90, Ghidra index: 1671, label: FUN_0008af90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_00129530(void);

undefined4 FUN_0008af90(void)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x24) != 0) {
    return 0;
  }
  iVar2 = (**(code **)(*in_ECX + 0x50))();
  if (*(int *)(unaff_EDI + 0x24) != iVar2) {
    FUN_0008f6a0(iVar2);
  }
  if (*(int *)(unaff_EDI + 0x24) == 0) {
    return 0;
  }
  if (*(int *)(unaff_EDI + 0x10) != 0) {
    iVar2 = FUN_000120f0();
    if ((iVar2 == 0) && (*(int *)(*(int *)(unaff_EDI + 0x24) + 0x10) != *(int *)(unaff_EDI + 0x10)))
    {
      FUN_0008f6a0(*(int *)(unaff_EDI + 0x10));
    }
    bVar1 = *(byte *)(*(int *)(unaff_EDI + 0x10) + 0x834);
    if (((bVar1 & 8) == 0) &&
       (*(byte *)(*(int *)(unaff_EDI + 0x10) + 0x834) = bVar1 | 8, (bVar1 & 5) == 0)) {
      FUN_00129530();
    }
  }
  return 1;
}
