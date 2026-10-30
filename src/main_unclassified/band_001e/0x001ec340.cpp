/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56B53E13980A3997FA0CC59CA65A6C159665C0BCF3C20AE574EDD17F1C59506D
 * Entry: 0x001ec340, Ghidra index: 6907, label: FUN_001ec340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Byte-returning 0x002E5880 callee reads implicit guest ECX.
 * Host C++ declaration matches existing draft only; ABI_UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
undefined4 FUN_001ec340(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar2 = 0xffffffff;
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 != '\0') {
      return 0;
    }
    iVar3 = FUN_002e5bf0(0);
    uVar2 = *(undefined4 *)(iVar3 + 0x2c);
  }
  return uVar2;
}
