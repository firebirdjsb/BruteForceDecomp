/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A27E6E0D4DFE50E4D9B4777E2B407B2284514560A326DDFC1ED1A86D9B44789
 * Entry: 0x001a9e30, Ghidra index: 5483, label: FUN_001a9e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a9e30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 8;
  iVar2 = 0x13;
  do {
    *(undefined4 *)(iVar1 + -4) = 0;
    FUN_0001fe40(iVar1,4,4,&LAB_0012de40);
    iVar1 = iVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}
