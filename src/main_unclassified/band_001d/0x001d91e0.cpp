/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8794594FFE936687735C28565515D1FDCEF9F4CD7A814467D911018554257D55
 * Entry: 0x001d91e0, Ghidra index: 6457, label: FUN_001d91e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra-draft-matched declarations; original Xbox implicit registers ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
extern void FUN_001d5b10(int param_1);
extern void FUN_0010bc40(void);
int * FUN_001d91e0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x4c;
    param_4 = param_4 + -0x4c;
    FUN_0001f4f0(iVar1,0,0xffffffff);
    FUN_001d5b10(param_3 + -0x30);
    FUN_001d5b10(param_3 + -0x20);
    FUN_0010bc40();
    param_3 = iVar1;
  } while (iVar1 != param_2);
  *param_1 = param_4;
  return param_1;
}
