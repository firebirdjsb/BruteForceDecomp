/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 221F0CD57738CF6DE2889F13A68443F2330B7048810DCD46F707703CF3139795
 * Entry: 0x001d2f10, Ghidra index: 6308, label: FUN_001d2f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001d2f10(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  iVar2 = param_1;
  do {
    FUN_0001f4f0((in_EAX - param_1) + iVar2,0,0xffffffff);
    iVar2 = iVar2 + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}
