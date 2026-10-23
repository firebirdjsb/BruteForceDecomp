/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E04F18DE77298862568EE6F5780D85A64A3B33B2A8A826C0695986D9A794F38
 * Entry: 0x002bcd30, Ghidra index: 9933, label: FUN_002bcd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002bcd30(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *in_EDX;
  
  if (in_EDX[5] == 0) {
    return 0;
  }
  do {
    if (in_EAX == 0) {
      in_EAX = *(int *)(*in_EDX + 0x18);
      iVar2 = in_EAX;
      if (in_EAX == 0) {
        return 0;
      }
    }
    else {
      iVar2 = *(int *)(in_EAX + 8);
    }
    iVar1 = in_EAX;
    if (*(int *)(in_EAX + 4) == 1) {
      while( true ) {
        in_EAX = *(int *)(in_EAX + 0x18);
        iVar1 = 0;
        if (in_EAX == 0) break;
        if (*(int *)(in_EAX + 4) != 1) {
          return in_EAX;
        }
      }
    }
    for (; in_EAX = iVar2, in_EAX == 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar2 == 0) {
        if (*in_EDX == iVar1) {
          return 0;
        }
        iVar2 = *(int *)(*in_EDX + 0x18);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar1 = iVar2;
    }
    if (*(int *)(in_EAX + 4) != 1) {
      return in_EAX;
    }
  } while( true );
}
