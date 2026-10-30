/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDA60C04FCCBF6C8CF385E5C4BA29C0413A96E63DA0EB3A8BFCC1A151A215DD8
 * Entry: 0x001d0560, Ghidra index: 6175, label: FUN_001d0560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x0010BC40 is a void() Ghidra draft with implicit
 * EAX/ECX guest inputs. This declaration does not verify its Xbox ABI. */
extern void FUN_0010bc40(void);
void FUN_001d0560(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    FUN_0010bc40();
  }
  return;
}
