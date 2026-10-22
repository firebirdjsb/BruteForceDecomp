/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A093265AAC2D4746E1441E7AE6AA18EBCAD52787828D53D8A5A152905BE2223
 * Entry: 0x00335afb, Ghidra index: 12443, label: FUN_00335afb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00335afb(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  if ((param_1 == 0) || (uVar1 = *(ushort *)(param_1 + 0xc), 100 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar1 != 0) {
      piVar3 = (int *)(param_1 + 0xa0);
      do {
        if (((piVar3[-0x1c] == 0 && piVar3[-0x1b] == 0) ||
            (((param_2 == 0 && ((*piVar3 == -1 || (*piVar3 == -2)))) ||
             ((*(byte *)(piVar3 + -0x1a) & 3) != 0)))) ||
           ((((char)piVar3[-0x19] == '\0' && (*piVar3 != -1)) ||
            ((piVar3[-0x15] & 0xc0000000U) == 0xc0000000)))) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 0x1d;
      } while (uVar4 < uVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}
