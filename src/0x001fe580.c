/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 486D1FFDFD8999550E97C7F235F5356FBEF36C0CEF48D93C357BB1C243E9C42B
 * Entry: 0x001fe580, Ghidra index: 7231, label: FUN_001fe580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe580(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_ESI;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  if (unaff_ESI != (int *)0x0) {
    if ((*(byte *)(in_EAX + 2) & 2) == 0) {
      FUN_001fe500();
    }
    if (((*(byte *)(in_EAX + 2) & 2) != 0) && ((*(byte *)(in_EAX + 2) & 1) != 0)) {
      iVar1 = (**(code **)(*unaff_ESI + 0x40))();
      FUN_0003d6c0(auStack_60,iVar1,iVar1 + 0x24);
      iVar1 = FUN_002338c0(auStack_30,auStack_60,in_EAX + 3);
      FUN_0003d6c0(auStack_90,iVar1,iVar1 + 0x24);
      (**(code **)(in_EAX[1] + 0xc))(auStack_90);
      (**(code **)(*in_EAX + 8))(auStack_70);
    }
  }
  return;
}
