/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99FFFDC98CA9856A0E31C4A1AFDE920CF8544487DF3AD220DA6EA11C358BF38B
 * Entry: 0x00027460, Ghidra index: 270, label: FUN_00027460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_00027460(void)

{
  int *in_ECX;
  
  FUN_0004e8f0();
  (**(code **)(*in_ECX + 0x5bc))();
  *(byte *)(in_ECX + 0x170) = *(byte *)(in_ECX + 0x170) & 0xfd;
  return 1;
}
