/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8BB70C39B82CDCF01F588CDEAFA9675AED5F87F4F2B279C8A0354AF597295E3
 * Entry: 0x00166030, Ghidra index: 4708, label: FUN_00166030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00166030(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined1 local_520 [1312];
  
  iVar2 = in_EAX - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  while (1 < iVar2 / 0x520) {
    FUN_001662b0(iVar2 + -0x520 + param_1);
    FUN_001666b0(param_1);
    FUN_001662b0(local_520);
    FUN_001665c0(param_1,(iVar2 + -0x520) / 0x520);
    iVar1 = 0x13;
    do {
      FUN_00068c90();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar2 = iVar2 + -0x520;
    iVar1 = iVar2 * 0x63e7063f;
  }
  return iVar1;
}
