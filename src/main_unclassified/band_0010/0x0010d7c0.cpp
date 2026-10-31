/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE60A2273AF4311844F9DB62DE36B2060670DFAE8AA100D91BFF9C36F43C74DE
 * Entry: 0x0010d7c0, Ghidra index: 3497, label: FUN_0010d7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declarations; Xbox register/stack ABI_UNVERIFIED. */
extern int FUN_0010d600(void);
extern undefined4 FUN_0010d660(void);
uint FUN_0010d7c0(char param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_0010d600();
  uVar3 = *(uint *)(in_EAX + 0x84);
  iVar1 = (uint)(param_1 != '\0') * 2 + -1;
  iVar4 = *(int *)(in_EAX + 0x88) + iVar1;
  if (iVar4 < 0) {
    iVar4 = *(int *)(in_EAX + 0x7c) + -1;
  }
  iVar5 = *(int *)(in_EAX + 0x7c);
  if (iVar5 <= iVar4) {
    iVar4 = 0;
  }
  while( true ) {
    if (iVar4 == *(int *)(in_EAX + 0x88)) {
      return uVar3 & 0xffffff00;
    }
    if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(in_EAX + 0x80))) && (-1 < iVar4)) &&
       (((iVar4 < iVar5 && (iVar5 = *(int *)(in_EAX + 0x80) * iVar4 + uVar3, iVar5 != -1)) &&
        ((iVar5 = *(int *)(*(int *)(in_EAX + 0xac) + iVar5 * 4), iVar5 != 0 && (iVar5 != iVar2))))))
    break;
    iVar4 = iVar4 + iVar1;
    if (iVar4 < 0) {
      iVar4 = *(int *)(in_EAX + 0x7c) + -1;
    }
    iVar5 = *(int *)(in_EAX + 0x7c);
    if (iVar5 <= iVar4) {
      iVar4 = 0;
    }
  }
  uVar3 = FUN_0010d660();
  return uVar3;
}
