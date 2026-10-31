/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C22C525D48957B3527D49466884B1DEAACCEC3FBEBBCBE746D311ACCA8EF26A
 * Entry: 0x001d11c0, Ghidra index: 6232, label: FUN_001d11c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra-draft-matched declarations; original Xbox implicit registers ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
extern void FUN_0010b1e0(void);
void FUN_001d11c0(int param_1,int param_2)

{
  undefined4 unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_0001f4f0(unaff_EBX,0,0xffffffff);
    FUN_0010b1e0();
  }
  return;
}
