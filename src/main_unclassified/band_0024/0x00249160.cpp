/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB19B1232F1B3F3306B24206E7760E76D4C66FFC1330247460682DA7941BACCD
 * Entry: 0x00249160, Ghidra index: 8154, label: FUN_00249160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x0010BC40 is a void() Ghidra draft with implicit
 * EAX/ECX guest inputs. This declaration does not verify its Xbox ABI. */
extern void FUN_0010bc40(void);
void FUN_00249160(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *unaff_EBX;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *unaff_EBX;
    FUN_0010bc40();
  }
  return;
}
