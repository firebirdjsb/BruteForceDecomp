/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E42511E4122F778E0F2089B36E0E867212DB1C3CCE3E7E3E537E4472DB8E0E4
 * Entry: 0x001033f0, Ghidra index: 3296, label: FUN_001033f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001033f0(void)

{
  int unaff_EBX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(unaff_EBX + 0x67),*(undefined1 *)(unaff_EBX + 100))
                        ,*(undefined1 *)(unaff_EBX + 0x65)),*(undefined1 *)(unaff_EBX + 0x66)) != 0)
  {
    FUN_001035f0();
    FUN_000ee6e0(unaff_EBX,local_8,local_10,local_4 - local_8,local_c - local_10,unaff_EBX + 100,
                 *(undefined4 *)(unaff_EBX + 0x78),0);
  }
  return;
}
