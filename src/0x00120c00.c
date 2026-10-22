/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46696C21F4473210876D905F08939A5D69CF8F4B6027B98B8C0F21E3EA8789B8
 * Entry: 0x00120c00, Ghidra index: 3648, label: FUN_00120c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00120c00(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(*(uint *)(in_EAX + 0x2e8) + 0x1cc) == 0) {
    return *(uint *)(in_EAX + 0x2e8) & 0xffffff00;
  }
  iVar1 = FUN_00121920();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00117210();
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_0012e9d0();
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}
