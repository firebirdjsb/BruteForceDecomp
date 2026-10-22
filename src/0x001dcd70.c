/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F4856B0C0AFCC8DC8C0DB2F8BA560056FAE5ACC6C0B8C3DC651E7D9DF1CCB23
 * Entry: 0x001dcd70, Ghidra index: 6593, label: FUN_001dcd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcd70(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
    in_EAX[5] = in_ECX[5];
    in_EAX[6] = in_ECX[6];
  }
  return;
}
