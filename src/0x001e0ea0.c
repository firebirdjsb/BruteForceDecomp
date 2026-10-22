/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7159E73FAE5C5AFF28D62BD8693028C96D84EBFB377474D8CE5A7EE276B1A69F
 * Entry: 0x001e0ea0, Ghidra index: 6724, label: FUN_001e0ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e0ea0(void)

{
  int in_ECX;
  char *unaff_ESI;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  if (in_ECX == 0) {
    *unaff_ESI = '\0';
    return;
  }
  if (*unaff_ESI == '\0') {
    local_8 = 0;
    local_18 = local_18 & 0xffffff00;
    local_4 = 0xf;
    FUN_0001f4f0(local_1c,0,0xffffffff);
    *unaff_ESI = '\x01';
    if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_18);
    }
  }
  return;
}
