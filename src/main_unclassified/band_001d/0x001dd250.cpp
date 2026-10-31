/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5A564DD94CAD193726911FD60D2C39C3C687BBDBD83F93BADFC0FCBC1A62580
 * Entry: 0x001dd250, Ghidra index: 6620, label: FUN_001dd250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declarations only; Xbox guest register/stack ABI_UNVERIFIED. */
extern void FUN_0001f4f0(int param_1, uint param_2, uint param_3);
extern int FUN_0010b470(int param_1);
void FUN_001dd250(void)

{
  int in_EAX;
  undefined4 unaff_EDI;
  
  if (in_EAX != 0) {
    *(undefined4 *)(in_EAX + 0x18) = 0xf;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined1 *)(in_EAX + 4) = 0;
    FUN_0001f4f0(unaff_EDI,0,0xffffffff);
    FUN_0010b470(in_EAX + 0x1c);
  }
  return;
}
