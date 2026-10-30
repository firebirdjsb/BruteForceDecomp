/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40AD1BC356CAF901C260259F3DD4B4EE9FF4D0EA3D6DF3CF77A4947719597005
 * Entry: 0x00091670, Ghidra index: 1786, label: FUN_00091670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_000916c0(void);

int FUN_00091670(void)

{
  byte in_AL;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if ((in_AL & 2) == 0) {
    if ((in_AL & 4) != 0) {
      iVar3 = 0x10;
    }
  }
  else {
    iVar3 = 0xc;
  }
  iVar2 = 0;
  if ((in_AL & 0x10) != 0) {
    iVar2 = 0xc;
  }
  iVar4 = 0;
  if ((in_AL & 0x40) != 0) {
    iVar4 = 4;
  }
  if ((char)in_AL < '\0') {
    iVar4 = iVar4 + 4;
  }
  iVar1 = FUN_000916c0();
  return iVar1 + iVar4 + iVar2 + iVar3;
}
