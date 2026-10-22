/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 525F13D5E412D953B26E49C99A7A76EBE8F4F6687BAAFAD0163234C04E8584FC
 * Entry: 0x0034a3bd, Ghidra index: 12929, label: FUN_0034a3bd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a3bd(byte *param_1)

{
  byte bVar1;
  int in_ECX;
  
  if (param_1[2] == 2) {
    param_1[2] = 3;
    if ((*param_1 & 4) == 0) {
      bVar1 = *(byte *)(in_ECX + 0x38);
    }
    else {
      bVar1 = *(byte *)(in_ECX + 0x3a);
    }
    param_1[3] = bVar1;
    FUN_003484af(param_1);
    FUN_0034c7e5(param_1 + 0x44,8);
    if ((*param_1 & 4) == 0) {
      bVar1 = *(byte *)(in_ECX + 0x39);
    }
    else {
      bVar1 = *(byte *)(in_ECX + 0x3b);
    }
    FUN_0034c35a(param_1 + 0x34,*(int *)(in_ECX + 0x1d8) + (uint)bVar1 * 5);
  }
  if ((*param_1 & 4) == 0) {
    FUN_00349cfc(param_1,0);
  }
  else {
    FUN_00349181(param_1);
  }
  return;
}
