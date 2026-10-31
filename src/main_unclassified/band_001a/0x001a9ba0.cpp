/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 231E6547787F24FB2111D866732C2FD725B30DEFDCDE1F255B25AC8DAC685DDF
 * Entry: 0x001a9ba0, Ghidra index: 5480, label: FUN_001a9ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001a9d70(void);
void FUN_001a9ba0(void)

{
  int iVar1;
  
  iVar1 = 0x1b;
  do {
    FUN_001a9d70();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
