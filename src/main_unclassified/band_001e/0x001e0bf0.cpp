/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F28A9D6BF6F646A0979F57C510DDC520290DB2A7C46A91D3950A2486EB31BE38
 * Entry: 0x001e0bf0, Ghidra index: 6718, label: FUN_001e0bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declarations only; Xbox guest register/stack ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
extern void FUN_001d5b10(int param_1);
extern void FUN_0010bc40(void);
int FUN_001e0bf0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    FUN_0001f4f0(param_1,0,0xffffffff);
    FUN_001d5b10(param_1 + 0x1c);
    FUN_001d5b10(param_1 + 0x2c);
    FUN_0010bc40();
    in_EAX = in_EAX + 0x4c;
  }
  return in_EAX;
}
