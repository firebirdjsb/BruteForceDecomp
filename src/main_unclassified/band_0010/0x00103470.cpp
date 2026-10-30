/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C331CB4C3A7347F0FD0168227B30A852E5F67BE87AF9A035589BB8FBF7E00E0
 * Entry: 0x00103470, Ghidra index: 3297, label: FUN_00103470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00103470(void)

{
  int unaff_EBX;
  undefined1 local_10 [16];
  
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(unaff_EBX + 0x6f),*(undefined1 *)(unaff_EBX + 0x6c)
                                ),*(undefined1 *)(unaff_EBX + 0x6d)),
               *(undefined1 *)(unaff_EBX + 0x6e)) != 0) {
    FUN_001035f0();
    if ((*(byte *)(unaff_EBX + 0x70) & 1) != 0) {
      FUN_000eec80(unaff_EBX,local_10,unaff_EBX + 0x6c,0x3f400000,0);
      return;
    }
    FUN_000eec80(unaff_EBX,local_10,unaff_EBX + 0x6c,0,0x3f400000);
  }
  return;
}
