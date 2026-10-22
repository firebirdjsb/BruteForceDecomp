/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AED62271CDF502BF711BF87BB872D06D1B8E82FE42EB373768D80FEE021A002F
 * Entry: 0x001a9e70, Ghidra index: 5484, label: FUN_001a9e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a9e70(void)

{
  int unaff_EBX;
  int iVar1;
  int iVar2;
  
  iVar1 = unaff_EBX + 4;
  iVar2 = 6;
  do {
    FUN_0001fe40(iVar1,4,4,&LAB_0012de40);
    iVar1 = iVar1 + 0x14;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
