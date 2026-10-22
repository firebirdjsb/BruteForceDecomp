/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E17A0911B13A7B5E380CD59392789C6701239DC10EC700027FA11A7CCE1E209D
 * Entry: 0x0036c610, Ghidra index: 13277, label: D3D_DestroyResource__LTCG
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void D3D8LTCG__D3D_DestroyResource__LTCG(void)

{
  uint uVar1;
  uint *unaff_EDI;
  
  uVar1 = *unaff_EDI & 0x70000;
  if ((uVar1 != 0x50000) || ((int)*unaff_EDI < 0)) {
    D3D_BlockOnResource_0();
  }
  FUN_0036c5c0(unaff_EDI);
  if (uVar1 == 0x50000) {
    if ((int)*unaff_EDI < 0) {
      MmFreeContiguousMemory(unaff_EDI[1] | 0x80000000);
      XAPILIB__LocalFree(unaff_EDI);
      return;
    }
  }
  else if (uVar1 == 0x20000) {
    if (-1 < (int)*unaff_EDI) {
      MmFreeContiguousMemory(unaff_EDI[1]);
      XAPILIB__LocalFree(unaff_EDI);
      return;
    }
  }
  else if ((uVar1 != 0x10000) && (uVar1 != 0x60000)) {
    MmFreeContiguousMemory(unaff_EDI[1] | 0x80000000);
  }
  XAPILIB__LocalFree(unaff_EDI);
  return;
}
