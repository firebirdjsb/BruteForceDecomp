/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6170937283F63998178DD4012585893D4DB7C2DDE04A645BE2E4B447B0D3F593
 * Entry: 0x001d0760, Ghidra index: 6185, label: FUN_001d0760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0760(int param_1,int param_2)

{
  undefined4 unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x3d4) {
    FUN_001d1fb0(unaff_EDI);
  }
  return;
}
