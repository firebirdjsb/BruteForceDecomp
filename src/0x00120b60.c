/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81D0DE0F6934459E2013B99842E86596FDB5810DC4C2946E0F6CB25319B381BC
 * Entry: 0x00120b60, Ghidra index: 3647, label: FUN_00120b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00120b60(void)

{
  int iVar1;
  char cVar2;
  int unaff_EDI;
  float10 fVar3;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (*(int *)(unaff_EDI + 0x638) != 0) {
    cVar2 = FUN_0015a0d0(local_4,local_8);
    if (cVar2 != '\0') {
      return (float10)0.25;
    }
    iVar1 = *(int *)(unaff_EDI + 0x1ec);
    if ((((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 6)) &&
       ((*(int *)(unaff_EDI + 0x7e0) != 0 &&
        (*(int *)(unaff_EDI + 0x7e0) == *(int *)(*(int *)(unaff_EDI + 0x2e8) + 0x1cc))))) {
      fVar3 = (float10)FUN_001209f0(unaff_EDI);
      if (fVar3 < (float10)1.0) {
        return (float10)3.0;
      }
      return (float10)2.0;
    }
  }
  return (float10)1.0;
}
