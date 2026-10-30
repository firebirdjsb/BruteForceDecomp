/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E102EBC2B6BC1DB488BB4480BDA8803821F902FE8B0A0AACAE2467DDEB179CD
 * Entry: 0x001ec5d0, Ghidra index: 6913, label: FUN_001ec5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Byte-returning 0x002E5880 callee reads implicit guest ECX.
 * Host C++ declaration matches existing draft only; ABI_UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
int FUN_001ec5d0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      return 0;
    }
    if (iVar1 == 5) {
      cVar2 = FUN_002e5880();
      if (cVar2 != '\0') {
        FUN_001eca30();
        param_2 = FUN_002ebf10();
        if (param_2 < 1) {
          return 0;
        }
      }
    }
    else {
      param_2 = 1;
      if ((iVar1 != 2) && (iVar1 != 6)) {
        return 0;
      }
    }
  }
  return param_2;
}
