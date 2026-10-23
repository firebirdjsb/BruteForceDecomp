/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A20B07E4E41F76F1FC4139384B0C62B1ADF66A2065AE7AF84617B107BF435C1E
 * Entry: 0x001cf5a0, Ghidra index: 6117, label: FUN_001cf5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf5a0(int param_1,int param_2)

{
  undefined4 unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x134) {
    FUN_001d1c60(unaff_EDI);
  }
  return;
}
