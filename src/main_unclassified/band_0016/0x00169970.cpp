/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96EC33D41F0152AB0F3C775C16461ED9C2C0F9D9E8C24DDB6FA76EFD4127BD64
 * Entry: 0x00169970, Ghidra index: 4754, label: FUN_00169970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE E8 0x001699A5 -> 0x001FB980, callee plain RET and EAX used.
 * Return-byte behavior and native host linkage remain ABI_UNVERIFIED. */
extern undefined4 FUN_001fb980(void);
undefined4 FUN_00169970(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  
  if (*in_EAX == 0) {
    iVar2 = in_EAX[1];
  }
  else {
    iVar2 = 0;
  }
  if (*in_ECX == 5) {
    piVar3 = (int *)in_ECX[1];
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar3 + 0x50))();
    if (iVar2 != 0) {
      cVar1 = FUN_001fb980();
      if (cVar1 != '\0') {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}
