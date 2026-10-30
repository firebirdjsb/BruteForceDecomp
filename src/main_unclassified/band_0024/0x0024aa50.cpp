/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6481E645D8B5A1621947CD589E2159F6315E3F5BAF016E0A4913997707CB4F24
 * Entry: 0x0024aa50, Ghidra index: 8224, label: FUN_0024aa50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x0010BC40 is a void() Ghidra draft with implicit
 * EAX/ECX guest inputs. This declaration does not verify its Xbox ABI. */
extern void FUN_0010bc40(void);
undefined4 * FUN_0024aa50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *in_EAX = *param_1;
    FUN_0010bc40();
    in_EAX = in_EAX + 5;
  }
  return in_EAX;
}
