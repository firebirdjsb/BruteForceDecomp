/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E3BFD99E60690E672D44AF20EB6751D61A568794D04B8AE090F97DBCC5EBD9D
 * Entry: 0x001dcf30, Ghidra index: 6604, label: FUN_001dcf30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcf30(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    *(undefined2 *)(in_EAX + 1) = *(undefined2 *)(in_ECX + 1);
    *(undefined1 *)((int)in_EAX + 6) = *(undefined1 *)((int)in_ECX + 6);
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
  }
  return;
}
