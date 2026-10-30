/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A416F2879A0483D4D3736FF0A6FFC31F7562A504ABEB8C790A4F30D06836B0E6
 * Entry: 0x0021c8c0, Ghidra index: 7530, label: FUN_0021c8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0021c8c0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int *unaff_EDI;
  
  cVar1 = FUN_0021d4d0(param_1,unaff_EDI[2]);
  if (cVar1 != '\0') {
    if (((*(byte *)((int)unaff_EDI + 0x26) & 0x10) == 0) && (unaff_EDI[2] != 0)) {
      piVar2 = (int *)FUN_000e0350(unaff_EDI[2],&param_1,unaff_EDI);
      unaff_EDI[5] = *piVar2;
      *(byte *)((int)unaff_EDI + 0x26) = *(byte *)((int)unaff_EDI + 0x26) | 0x10;
    }
    (**(code **)(*unaff_EDI + 0x74))(0x3f800000);
    unaff_EDI[0x28] = 0;
    FUN_0021a700(unaff_EDI);
    FUN_0021ab60(0);
    FUN_00219d00(unaff_EDI[3],1);
  }
  return;
}
