/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 210ACDF9482B68B4B5E0D966945FAA33A0D3475570A7E53FE70E63AF9E86E6F5
 * Entry: 0x00132a20, Ghidra index: 3858, label: FUN_00132a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00132a20(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    *(undefined1 *)(in_EAX + 4) = *(undefined1 *)(in_ECX + 4);
  }
  return;
}
