/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2188CF9170E24DE0964184319BAEC13D904F9401BD9BA22708F61E1ECCEE2A5B
 * Entry: 0x001fe500, Ghidra index: 7230, label: FUN_001fe500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe500(void)

{
  int iVar1;
  int *in_ECX;
  int *unaff_EBX;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  if (in_ECX != (int *)0x0) {
    (**(code **)(*in_ECX + 0x40))();
    FUN_00061eb0();
    iVar1 = (**(code **)(*unaff_EBX + 0x10))();
    FUN_0003d6c0(auStack_60,iVar1,iVar1 + 0x24);
    iVar1 = FUN_002338c0(auStack_30,auStack_c0,auStack_60);
    FUN_0003d6c0(auStack_90,iVar1,iVar1 + 0x24);
    FUN_0003d730(unaff_EBX + 3,auStack_90);
    *(byte *)(unaff_EBX + 2) = *(byte *)(unaff_EBX + 2) | 2;
  }
  return;
}
