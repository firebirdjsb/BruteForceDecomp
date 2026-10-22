/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 028F7B15B3A6009DC2CB1D870D2284803C71DB522633A0BF47110654700B4767
 * Entry: 0x002e40d0, Ghidra index: 10431, label: FUN_002e40d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_002e40d0(void)

{
  float10 fVar1;
  char cVar2;
  ushort uVar3;
  float10 fVar4;
  
  cVar2 = FUN_002e3eb0();
  if (cVar2 != '\0') {
    fVar4 = (float10)FUN_002e3f90();
    fVar1 = (float10)0.5;
    if (fVar4 < fVar1 || (fVar4 == fVar1) != 0) {
      return CONCAT11(fVar4 < fVar1 |
                      (byte)((ushort)((ushort)(isnan(fVar4) || isnan(fVar1)) << 10) >> 8) |
                      (byte)((ushort)((ushort)(fVar4 == fVar1) << 0xe) >> 8),1);
    }
  }
  FUN_002e3f20();
  uVar3 = XONLINES__XNetGetEthernetLinkStatus();
  return uVar3 & 0xff01;
}
